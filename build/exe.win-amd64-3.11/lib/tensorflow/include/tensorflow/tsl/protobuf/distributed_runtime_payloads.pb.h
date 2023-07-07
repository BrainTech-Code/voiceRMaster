// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/tsl/protobuf/distributed_runtime_payloads.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto;
namespace tensorflow {
namespace distributed_runtime {
class GrpcPayloadContainer;
struct GrpcPayloadContainerDefaultTypeInternal;
extern GrpcPayloadContainerDefaultTypeInternal _GrpcPayloadContainer_default_instance_;
class GrpcPayloadContainer_PayloadsEntry_DoNotUse;
struct GrpcPayloadContainer_PayloadsEntry_DoNotUseDefaultTypeInternal;
extern GrpcPayloadContainer_PayloadsEntry_DoNotUseDefaultTypeInternal _GrpcPayloadContainer_PayloadsEntry_DoNotUse_default_instance_;
class GrpcPayloadsLost;
struct GrpcPayloadsLostDefaultTypeInternal;
extern GrpcPayloadsLostDefaultTypeInternal _GrpcPayloadsLost_default_instance_;
class WorkerPossiblyRestarted;
struct WorkerPossiblyRestartedDefaultTypeInternal;
extern WorkerPossiblyRestartedDefaultTypeInternal _WorkerPossiblyRestarted_default_instance_;
}  // namespace distributed_runtime
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::distributed_runtime::GrpcPayloadContainer* Arena::CreateMaybeMessage<::tensorflow::distributed_runtime::GrpcPayloadContainer>(Arena*);
template<> ::tensorflow::distributed_runtime::GrpcPayloadContainer_PayloadsEntry_DoNotUse* Arena::CreateMaybeMessage<::tensorflow::distributed_runtime::GrpcPayloadContainer_PayloadsEntry_DoNotUse>(Arena*);
template<> ::tensorflow::distributed_runtime::GrpcPayloadsLost* Arena::CreateMaybeMessage<::tensorflow::distributed_runtime::GrpcPayloadsLost>(Arena*);
template<> ::tensorflow::distributed_runtime::WorkerPossiblyRestarted* Arena::CreateMaybeMessage<::tensorflow::distributed_runtime::WorkerPossiblyRestarted>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace distributed_runtime {

// ===================================================================

class GrpcPayloadContainer_PayloadsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<GrpcPayloadContainer_PayloadsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<GrpcPayloadContainer_PayloadsEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> SuperType;
  GrpcPayloadContainer_PayloadsEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR GrpcPayloadContainer_PayloadsEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit GrpcPayloadContainer_PayloadsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const GrpcPayloadContainer_PayloadsEntry_DoNotUse& other);
  static const GrpcPayloadContainer_PayloadsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const GrpcPayloadContainer_PayloadsEntry_DoNotUse*>(&_GrpcPayloadContainer_PayloadsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "tensorflow.distributed_runtime.GrpcPayloadContainer.PayloadsEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto;
};

// -------------------------------------------------------------------

class GrpcPayloadContainer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.distributed_runtime.GrpcPayloadContainer) */ {
 public:
  inline GrpcPayloadContainer() : GrpcPayloadContainer(nullptr) {}
  ~GrpcPayloadContainer() override;
  explicit PROTOBUF_CONSTEXPR GrpcPayloadContainer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GrpcPayloadContainer(const GrpcPayloadContainer& from);
  GrpcPayloadContainer(GrpcPayloadContainer&& from) noexcept
    : GrpcPayloadContainer() {
    *this = ::std::move(from);
  }

  inline GrpcPayloadContainer& operator=(const GrpcPayloadContainer& from) {
    CopyFrom(from);
    return *this;
  }
  inline GrpcPayloadContainer& operator=(GrpcPayloadContainer&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GrpcPayloadContainer& default_instance() {
    return *internal_default_instance();
  }
  static inline const GrpcPayloadContainer* internal_default_instance() {
    return reinterpret_cast<const GrpcPayloadContainer*>(
               &_GrpcPayloadContainer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GrpcPayloadContainer& a, GrpcPayloadContainer& b) {
    a.Swap(&b);
  }
  inline void Swap(GrpcPayloadContainer* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GrpcPayloadContainer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GrpcPayloadContainer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GrpcPayloadContainer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GrpcPayloadContainer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GrpcPayloadContainer& from) {
    GrpcPayloadContainer::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GrpcPayloadContainer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.distributed_runtime.GrpcPayloadContainer";
  }
  protected:
  explicit GrpcPayloadContainer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kPayloadsFieldNumber = 1,
  };
  // map<string, bytes> payloads = 1;
  int payloads_size() const;
  private:
  int _internal_payloads_size() const;
  public:
  void clear_payloads();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_payloads() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_payloads();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      payloads() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_payloads();

  // @@protoc_insertion_point(class_scope:tensorflow.distributed_runtime.GrpcPayloadContainer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        GrpcPayloadContainer_PayloadsEntry_DoNotUse,
        std::string, std::string,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> payloads_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto;
};
// -------------------------------------------------------------------

class GrpcPayloadsLost final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:tensorflow.distributed_runtime.GrpcPayloadsLost) */ {
 public:
  inline GrpcPayloadsLost() : GrpcPayloadsLost(nullptr) {}
  explicit PROTOBUF_CONSTEXPR GrpcPayloadsLost(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GrpcPayloadsLost(const GrpcPayloadsLost& from);
  GrpcPayloadsLost(GrpcPayloadsLost&& from) noexcept
    : GrpcPayloadsLost() {
    *this = ::std::move(from);
  }

  inline GrpcPayloadsLost& operator=(const GrpcPayloadsLost& from) {
    CopyFrom(from);
    return *this;
  }
  inline GrpcPayloadsLost& operator=(GrpcPayloadsLost&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GrpcPayloadsLost& default_instance() {
    return *internal_default_instance();
  }
  static inline const GrpcPayloadsLost* internal_default_instance() {
    return reinterpret_cast<const GrpcPayloadsLost*>(
               &_GrpcPayloadsLost_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GrpcPayloadsLost& a, GrpcPayloadsLost& b) {
    a.Swap(&b);
  }
  inline void Swap(GrpcPayloadsLost* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GrpcPayloadsLost* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GrpcPayloadsLost* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GrpcPayloadsLost>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const GrpcPayloadsLost& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const GrpcPayloadsLost& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.distributed_runtime.GrpcPayloadsLost";
  }
  protected:
  explicit GrpcPayloadsLost(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:tensorflow.distributed_runtime.GrpcPayloadsLost)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto;
};
// -------------------------------------------------------------------

class WorkerPossiblyRestarted final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:tensorflow.distributed_runtime.WorkerPossiblyRestarted) */ {
 public:
  inline WorkerPossiblyRestarted() : WorkerPossiblyRestarted(nullptr) {}
  explicit PROTOBUF_CONSTEXPR WorkerPossiblyRestarted(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WorkerPossiblyRestarted(const WorkerPossiblyRestarted& from);
  WorkerPossiblyRestarted(WorkerPossiblyRestarted&& from) noexcept
    : WorkerPossiblyRestarted() {
    *this = ::std::move(from);
  }

  inline WorkerPossiblyRestarted& operator=(const WorkerPossiblyRestarted& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkerPossiblyRestarted& operator=(WorkerPossiblyRestarted&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WorkerPossiblyRestarted& default_instance() {
    return *internal_default_instance();
  }
  static inline const WorkerPossiblyRestarted* internal_default_instance() {
    return reinterpret_cast<const WorkerPossiblyRestarted*>(
               &_WorkerPossiblyRestarted_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(WorkerPossiblyRestarted& a, WorkerPossiblyRestarted& b) {
    a.Swap(&b);
  }
  inline void Swap(WorkerPossiblyRestarted* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WorkerPossiblyRestarted* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WorkerPossiblyRestarted* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WorkerPossiblyRestarted>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const WorkerPossiblyRestarted& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const WorkerPossiblyRestarted& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.distributed_runtime.WorkerPossiblyRestarted";
  }
  protected:
  explicit WorkerPossiblyRestarted(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:tensorflow.distributed_runtime.WorkerPossiblyRestarted)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GrpcPayloadContainer

// map<string, bytes> payloads = 1;
inline int GrpcPayloadContainer::_internal_payloads_size() const {
  return _impl_.payloads_.size();
}
inline int GrpcPayloadContainer::payloads_size() const {
  return _internal_payloads_size();
}
inline void GrpcPayloadContainer::clear_payloads() {
  _impl_.payloads_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
GrpcPayloadContainer::_internal_payloads() const {
  return _impl_.payloads_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
GrpcPayloadContainer::payloads() const {
  // @@protoc_insertion_point(field_map:tensorflow.distributed_runtime.GrpcPayloadContainer.payloads)
  return _internal_payloads();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
GrpcPayloadContainer::_internal_mutable_payloads() {
  return _impl_.payloads_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
GrpcPayloadContainer::mutable_payloads() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.distributed_runtime.GrpcPayloadContainer.payloads)
  return _internal_mutable_payloads();
}

// -------------------------------------------------------------------

// GrpcPayloadsLost

// -------------------------------------------------------------------

// WorkerPossiblyRestarted

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace distributed_runtime
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2ftsl_2fprotobuf_2fdistributed_5fruntime_5fpayloads_2eproto
