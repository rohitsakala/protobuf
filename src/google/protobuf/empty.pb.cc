// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/empty.proto

#include <google/protobuf/empty.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace google {
namespace protobuf {
class EmptyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Empty> _instance;
} _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google
static void InitDefaultsEmpty_google_2fprotobuf_2fempty_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::protobuf::_Empty_default_instance_;
    new (ptr) ::google::protobuf::Empty();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::protobuf::Empty::InitAsDefaultInstance();
}

LIBPROTOBUF_EXPORT ::google::protobuf::internal::SCCInfo<0> scc_info_Empty_google_2fprotobuf_2fempty_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsEmpty_google_2fprotobuf_2fempty_2eproto}, {}};

void InitDefaults_google_2fprotobuf_2fempty_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Empty_google_2fprotobuf_2fempty_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2fprotobuf_2fempty_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fempty_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fempty_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2fprotobuf_2fempty_2eproto::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::protobuf::Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::protobuf::Empty)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::protobuf::_Empty_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2fprotobuf_2fempty_2eproto = {
  {}, AddDescriptors_google_2fprotobuf_2fempty_2eproto, "google/protobuf/empty.proto", schemas,
  file_default_instances, TableStruct_google_2fprotobuf_2fempty_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fempty_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2fempty_2eproto, file_level_service_descriptors_google_2fprotobuf_2fempty_2eproto,
};

::google::protobuf::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fempty_2eproto = {
  false, InitDefaults_google_2fprotobuf_2fempty_2eproto, 
  "\n\033google/protobuf/empty.proto\022\017google.pr"
  "otobuf\"\007\n\005EmptyBv\n\023com.google.protobufB\n"
  "EmptyProtoP\001Z\'github.com/golang/protobuf"
  "/ptypes/empty\370\001\001\242\002\003GPB\252\002\036Google.Protobuf"
  ".WellKnownTypesb\006proto3"
,
  "google/protobuf/empty.proto", &assign_descriptors_table_google_2fprotobuf_2fempty_2eproto, 183,
};

void AddDescriptors_google_2fprotobuf_2fempty_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2fempty_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2fempty_2eproto = []() { AddDescriptors_google_2fprotobuf_2fempty_2eproto(); return true; }();
namespace google {
namespace protobuf {

// ===================================================================

void Empty::InitAsDefaultInstance() {
}
class Empty::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Empty::Empty()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Empty)
}
Empty::Empty(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Empty)
}
Empty::Empty(const Empty& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Empty)
}

void Empty::SharedCtor() {
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:google.protobuf.Empty)
  SharedDtor();
}

void Empty::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void Empty::ArenaDtor(void* object) {
  Empty* _this = reinterpret_cast< Empty* >(object);
  (void)_this;
}
void Empty::RegisterArenaDtor(::google::protobuf::Arena*) {
}
void Empty::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Empty& Empty::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Empty_google_2fprotobuf_2fempty_2eproto.base);
  return *internal_default_instance();
}


void Empty::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Empty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Empty::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Empty*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ::google::protobuf::uint32 tag;
    ptr = Varint::Parse32Inline(ptr, &tag);
    if (!ptr) goto error;
    switch (tag >> 3) {
      case 0: goto error;
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4) {
          if (!ctx->ValidEndGroup(tag)) goto error;
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
error:
  return nullptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth);
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Empty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Empty)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Empty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Empty)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Empty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Empty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.Empty)
}

::google::protobuf::uint8* Empty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Empty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Empty)
  return target;
}

size_t Empty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Empty)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Empty::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  const Empty* source =
      ::google::protobuf::DynamicCastToGenerated<Empty>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Empty)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Empty)
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void Empty::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {
  return true;
}

void Empty::Swap(Empty* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Empty* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Empty::UnsafeArenaSwap(Empty* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Empty::InternalSwap(Empty* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Empty::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2fprotobuf_2fempty_2eproto);
  return ::file_level_metadata_google_2fprotobuf_2fempty_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::protobuf::Empty* Arena::CreateMaybeMessage< ::google::protobuf::Empty >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::protobuf::Empty >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
