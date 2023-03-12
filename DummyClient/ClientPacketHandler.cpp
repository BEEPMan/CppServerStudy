#include "pch.h"
#include "ClientPacketHandler.h"
#include "BufferReader.h"

void ClientPacketHandler::HandlePacket(BYTE* buffer, int32 len)
{
    BufferReader br(buffer, len);

    PacketHeader header;
    br >> header;

    switch (header.id)
    {
    case S_TEST:
        Handle_S_TEST(buffer, len);
        break;
    }
}

#pragma pack(1)
struct PKT_S_TEST
{
    struct BuffsListItem
    {
        uint64 buffId;
        float remainTime;

        uint16 victimsOffset;
        uint16 victimsCount;

        bool Validate(BYTE* packetStart, uint16 packetSize, OUT uint32& size)
        {
            if (victimsOffset + victimsCount * sizeof(uint64) > packetSize)
                return false;

            size += victimsCount * sizeof(uint64);
            return true;
        }
    };

    uint16 packetSize; // 공용 헤더
    uint16 packetId; // 공용 헤더
    uint64 id;
    uint32 hp;
    uint16 attack;
    uint16 buffsOffset;
    uint16 buffsCount;

    bool Validate()
    {
        uint32 size = 0;
        size += sizeof(PKT_S_TEST);
        if (packetSize < size)
            return false;

        if (buffsOffset + buffsCount * sizeof(BuffsListItem) > packetSize)
            return false;

        // Buffers 가변 데이터 크기 추가
        size += buffsCount * sizeof(BuffsListItem);

        BuffsList buffList = GetBuffList();
        for (int32 i = 0; i < buffList.Count(); i++)
        {
            if (buffList[i].Validate((BYTE*)this, packetSize, OUT size) == false)
                return false;
        }

        // 최종 크기 비교
        if (size != packetSize)
            return false;

        return true;
    }

    using BuffsList = PacketList<PKT_S_TEST::BuffsListItem>;
    using BuffsVictimsList = PacketList<uint64>;

    BuffsList GetBuffList()
    {
        BYTE* data = reinterpret_cast<BYTE*>(this);
        data += buffsOffset;
        return BuffsList(reinterpret_cast<PKT_S_TEST::BuffsListItem*>(data), buffsCount);
    }

    BuffsVictimsList GetBuffsVictimList(BuffsListItem* buffsItem)
    {
        BYTE* data = reinterpret_cast<BYTE*>(this);
        data += buffsItem->victimsOffset;
        return BuffsVictimsList(reinterpret_cast<uint64*>(data), buffsItem->victimsCount);
    }

    //vector<BuffData> buffs;
    //wstring name;
};
#pragma pack()

void ClientPacketHandler::Handle_S_TEST(BYTE* buffer, int32 len)
{
    BufferReader br(buffer, len);

    if (len < sizeof(PKT_S_TEST))
        return;

    PKT_S_TEST* pkt = reinterpret_cast<PKT_S_TEST*>(buffer);

    if (pkt->Validate() == false)
        return;

    //cout << "ID : " << id << " HP : " << hp << " ATK : " << attack << endl;

    PKT_S_TEST::BuffsList buffs = pkt->GetBuffList();

    cout << "BuffCount : " << buffs.Count() << endl;

    for (auto& buff : buffs)
    {
        cout << "BuffInfo : " << buff.buffId << " " << buff.remainTime << endl;

        PKT_S_TEST::BuffsVictimsList victims = pkt->GetBuffsVictimList(&buff);

        cout << "Victim Count : " << victims.Count() << endl;

        for (auto& victim : victims)
        {
            cout << "Victim : " << victim << endl;
        }
    }
}
