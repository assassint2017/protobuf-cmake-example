// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

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
namespace zcy {
class helloworldDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<helloworld> _instance;
} _helloworld_default_instance_;
}  // namespace zcy
static void InitDefaultsscc_info_helloworld_test_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zcy::_helloworld_default_instance_;
    new (ptr) ::zcy::helloworld();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zcy::helloworld::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_helloworld_test_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_helloworld_test_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_test_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_test_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_test_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::zcy::helloworld, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::zcy::helloworld, school_id_),
  PROTOBUF_FIELD_OFFSET(::zcy::helloworld, student_name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zcy::helloworld)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::zcy::_helloworld_default_instance_),
};

const char descriptor_table_protodef_test_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntest.proto\022\003zcy\"5\n\nhelloworld\022\021\n\tschoo"
  "l_id\030\001 \001(\005\022\024\n\014student_name\030\002 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_test_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_test_2eproto_sccs[1] = {
  &scc_info_helloworld_test_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_test_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto = {
  false, false, descriptor_table_protodef_test_2eproto, "test.proto", 80,
  &descriptor_table_test_2eproto_once, descriptor_table_test_2eproto_sccs, descriptor_table_test_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_test_2eproto::offsets,
  file_level_metadata_test_2eproto, 1, file_level_enum_descriptors_test_2eproto, file_level_service_descriptors_test_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_test_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_test_2eproto)), true);
namespace zcy {

// ===================================================================

void helloworld::InitAsDefaultInstance() {
}
class helloworld::_Internal {
 public:
};

helloworld::helloworld(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:zcy.helloworld)
}
helloworld::helloworld(const helloworld& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  student_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_student_name().empty()) {
    student_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_student_name(),
      GetArena());
  }
  school_id_ = from.school_id_;
  // @@protoc_insertion_point(copy_constructor:zcy.helloworld)
}

void helloworld::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_helloworld_test_2eproto.base);
  student_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  school_id_ = 0;
}

helloworld::~helloworld() {
  // @@protoc_insertion_point(destructor:zcy.helloworld)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void helloworld::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  student_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void helloworld::ArenaDtor(void* object) {
  helloworld* _this = reinterpret_cast< helloworld* >(object);
  (void)_this;
}
void helloworld::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void helloworld::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const helloworld& helloworld::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_helloworld_test_2eproto.base);
  return *internal_default_instance();
}


void helloworld::Clear() {
// @@protoc_insertion_point(message_clear_start:zcy.helloworld)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  student_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  school_id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* helloworld::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 school_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          school_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string student_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_student_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "zcy.helloworld.student_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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

::PROTOBUF_NAMESPACE_ID::uint8* helloworld::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:zcy.helloworld)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 school_id = 1;
  if (this->school_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_school_id(), target);
  }

  // string student_name = 2;
  if (this->student_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_student_name().data(), static_cast<int>(this->_internal_student_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "zcy.helloworld.student_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_student_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zcy.helloworld)
  return target;
}

size_t helloworld::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zcy.helloworld)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string student_name = 2;
  if (this->student_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_student_name());
  }

  // int32 school_id = 1;
  if (this->school_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_school_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void helloworld::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zcy.helloworld)
  GOOGLE_DCHECK_NE(&from, this);
  const helloworld* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<helloworld>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zcy.helloworld)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zcy.helloworld)
    MergeFrom(*source);
  }
}

void helloworld::MergeFrom(const helloworld& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zcy.helloworld)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.student_name().size() > 0) {
    _internal_set_student_name(from._internal_student_name());
  }
  if (from.school_id() != 0) {
    _internal_set_school_id(from._internal_school_id());
  }
}

void helloworld::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zcy.helloworld)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void helloworld::CopyFrom(const helloworld& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zcy.helloworld)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool helloworld::IsInitialized() const {
  return true;
}

void helloworld::InternalSwap(helloworld* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  student_name_.Swap(&other->student_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(school_id_, other->school_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata helloworld::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zcy
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::zcy::helloworld* Arena::CreateMaybeMessage< ::zcy::helloworld >(Arena* arena) {
  return Arena::CreateMessageInternal< ::zcy::helloworld >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>