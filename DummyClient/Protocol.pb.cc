// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol.proto

#include "Protocol.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Protocol {
constexpr S_TEST::S_TEST(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : buffs_()
  , id_(uint64_t{0u})
  , hp_(0u)
  , attack_(0u){}
struct S_TESTDefaultTypeInternal {
  constexpr S_TESTDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~S_TESTDefaultTypeInternal() {}
  union {
    S_TEST _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT S_TESTDefaultTypeInternal _S_TEST_default_instance_;
}  // namespace Protocol
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Protocol_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Protocol_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Protocol_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Protocol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Protocol::S_TEST, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Protocol::S_TEST, id_),
  PROTOBUF_FIELD_OFFSET(::Protocol::S_TEST, hp_),
  PROTOBUF_FIELD_OFFSET(::Protocol::S_TEST, attack_),
  PROTOBUF_FIELD_OFFSET(::Protocol::S_TEST, buffs_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Protocol::S_TEST)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Protocol::_S_TEST_default_instance_),
};

const char descriptor_table_protodef_Protocol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016Protocol.proto\022\010Protocol\032\nEnum.proto\032\014"
  "Struct.proto\"S\n\006S_TEST\022\n\n\002id\030\001 \001(\004\022\n\n\002hp"
  "\030\002 \001(\r\022\016\n\006attack\030\003 \001(\r\022!\n\005buffs\030\004 \003(\0132\022."
  "Protocol.BuffDatab\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Protocol_2eproto_deps[2] = {
  &::descriptor_table_Enum_2eproto,
  &::descriptor_table_Struct_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Protocol_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protocol_2eproto = {
  false, false, 145, descriptor_table_protodef_Protocol_2eproto, "Protocol.proto", 
  &descriptor_table_Protocol_2eproto_once, descriptor_table_Protocol_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_Protocol_2eproto::offsets,
  file_level_metadata_Protocol_2eproto, file_level_enum_descriptors_Protocol_2eproto, file_level_service_descriptors_Protocol_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Protocol_2eproto_getter() {
  return &descriptor_table_Protocol_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Protocol_2eproto(&descriptor_table_Protocol_2eproto);
namespace Protocol {

// ===================================================================

class S_TEST::_Internal {
 public:
};

void S_TEST::clear_buffs() {
  buffs_.Clear();
}
S_TEST::S_TEST(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  buffs_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Protocol.S_TEST)
}
S_TEST::S_TEST(const S_TEST& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      buffs_(from.buffs_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&attack_) -
    reinterpret_cast<char*>(&id_)) + sizeof(attack_));
  // @@protoc_insertion_point(copy_constructor:Protocol.S_TEST)
}

void S_TEST::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&attack_) -
    reinterpret_cast<char*>(&id_)) + sizeof(attack_));
}

S_TEST::~S_TEST() {
  // @@protoc_insertion_point(destructor:Protocol.S_TEST)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void S_TEST::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void S_TEST::ArenaDtor(void* object) {
  S_TEST* _this = reinterpret_cast< S_TEST* >(object);
  (void)_this;
}
void S_TEST::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void S_TEST::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void S_TEST::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.S_TEST)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  buffs_.Clear();
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&attack_) -
      reinterpret_cast<char*>(&id_)) + sizeof(attack_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* S_TEST::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 hp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          hp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 attack = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          attack_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Protocol.BuffData buffs = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_buffs(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* S_TEST::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.S_TEST)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // uint32 hp = 2;
  if (this->hp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_hp(), target);
  }

  // uint32 attack = 3;
  if (this->attack() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_attack(), target);
  }

  // repeated .Protocol.BuffData buffs = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_buffs_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_buffs(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.S_TEST)
  return target;
}

size_t S_TEST::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.S_TEST)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Protocol.BuffData buffs = 4;
  total_size += 1UL * this->_internal_buffs_size();
  for (const auto& msg : this->buffs_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // uint64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_id());
  }

  // uint32 hp = 2;
  if (this->hp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_hp());
  }

  // uint32 attack = 3;
  if (this->attack() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_attack());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void S_TEST::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.S_TEST)
  GOOGLE_DCHECK_NE(&from, this);
  const S_TEST* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<S_TEST>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.S_TEST)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.S_TEST)
    MergeFrom(*source);
  }
}

void S_TEST::MergeFrom(const S_TEST& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.S_TEST)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  buffs_.MergeFrom(from.buffs_);
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.hp() != 0) {
    _internal_set_hp(from._internal_hp());
  }
  if (from.attack() != 0) {
    _internal_set_attack(from._internal_attack());
  }
}

void S_TEST::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.S_TEST)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S_TEST::CopyFrom(const S_TEST& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.S_TEST)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S_TEST::IsInitialized() const {
  return true;
}

void S_TEST::InternalSwap(S_TEST* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  buffs_.InternalSwap(&other->buffs_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(S_TEST, attack_)
      + sizeof(S_TEST::attack_)
      - PROTOBUF_FIELD_OFFSET(S_TEST, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata S_TEST::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Protocol_2eproto_getter, &descriptor_table_Protocol_2eproto_once,
      file_level_metadata_Protocol_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Protocol::S_TEST* Arena::CreateMaybeMessage< ::Protocol::S_TEST >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Protocol::S_TEST >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
