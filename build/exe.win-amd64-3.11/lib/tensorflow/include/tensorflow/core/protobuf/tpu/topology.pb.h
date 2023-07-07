// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tpu/topology.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto

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
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto;
namespace tensorflow {
namespace tpu {
class TPUHardwareFeature;
struct TPUHardwareFeatureDefaultTypeInternal;
extern TPUHardwareFeatureDefaultTypeInternal _TPUHardwareFeature_default_instance_;
class TopologyProto;
struct TopologyProtoDefaultTypeInternal;
extern TopologyProtoDefaultTypeInternal _TopologyProto_default_instance_;
}  // namespace tpu
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::tpu::TPUHardwareFeature* Arena::CreateMaybeMessage<::tensorflow::tpu::TPUHardwareFeature>(Arena*);
template<> ::tensorflow::tpu::TopologyProto* Arena::CreateMaybeMessage<::tensorflow::tpu::TopologyProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace tpu {

enum TPUHardwareFeature_EmbeddingFeature : int {
  TPUHardwareFeature_EmbeddingFeature_UNSUPPORTED = 0,
  TPUHardwareFeature_EmbeddingFeature_V1 = 1,
  TPUHardwareFeature_EmbeddingFeature_V2 = 2,
  TPUHardwareFeature_EmbeddingFeature_TPUHardwareFeature_EmbeddingFeature_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  TPUHardwareFeature_EmbeddingFeature_TPUHardwareFeature_EmbeddingFeature_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool TPUHardwareFeature_EmbeddingFeature_IsValid(int value);
constexpr TPUHardwareFeature_EmbeddingFeature TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_MIN = TPUHardwareFeature_EmbeddingFeature_UNSUPPORTED;
constexpr TPUHardwareFeature_EmbeddingFeature TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_MAX = TPUHardwareFeature_EmbeddingFeature_V2;
constexpr int TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_ARRAYSIZE = TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TPUHardwareFeature_EmbeddingFeature_descriptor();
template<typename T>
inline const std::string& TPUHardwareFeature_EmbeddingFeature_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TPUHardwareFeature_EmbeddingFeature>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TPUHardwareFeature_EmbeddingFeature_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TPUHardwareFeature_EmbeddingFeature_descriptor(), enum_t_value);
}
inline bool TPUHardwareFeature_EmbeddingFeature_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TPUHardwareFeature_EmbeddingFeature* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TPUHardwareFeature_EmbeddingFeature>(
    TPUHardwareFeature_EmbeddingFeature_descriptor(), name, value);
}
// ===================================================================

class TPUHardwareFeature final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.TPUHardwareFeature) */ {
 public:
  inline TPUHardwareFeature() : TPUHardwareFeature(nullptr) {}
  ~TPUHardwareFeature() override;
  explicit PROTOBUF_CONSTEXPR TPUHardwareFeature(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TPUHardwareFeature(const TPUHardwareFeature& from);
  TPUHardwareFeature(TPUHardwareFeature&& from) noexcept
    : TPUHardwareFeature() {
    *this = ::std::move(from);
  }

  inline TPUHardwareFeature& operator=(const TPUHardwareFeature& from) {
    CopyFrom(from);
    return *this;
  }
  inline TPUHardwareFeature& operator=(TPUHardwareFeature&& from) noexcept {
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
  static const TPUHardwareFeature& default_instance() {
    return *internal_default_instance();
  }
  static inline const TPUHardwareFeature* internal_default_instance() {
    return reinterpret_cast<const TPUHardwareFeature*>(
               &_TPUHardwareFeature_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TPUHardwareFeature& a, TPUHardwareFeature& b) {
    a.Swap(&b);
  }
  inline void Swap(TPUHardwareFeature* other) {
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
  void UnsafeArenaSwap(TPUHardwareFeature* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TPUHardwareFeature* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TPUHardwareFeature>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TPUHardwareFeature& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TPUHardwareFeature& from) {
    TPUHardwareFeature::MergeImpl(*this, from);
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
  void InternalSwap(TPUHardwareFeature* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.tpu.TPUHardwareFeature";
  }
  protected:
  explicit TPUHardwareFeature(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef TPUHardwareFeature_EmbeddingFeature EmbeddingFeature;
  static constexpr EmbeddingFeature UNSUPPORTED =
    TPUHardwareFeature_EmbeddingFeature_UNSUPPORTED;
  static constexpr EmbeddingFeature V1 =
    TPUHardwareFeature_EmbeddingFeature_V1;
  static constexpr EmbeddingFeature V2 =
    TPUHardwareFeature_EmbeddingFeature_V2;
  static inline bool EmbeddingFeature_IsValid(int value) {
    return TPUHardwareFeature_EmbeddingFeature_IsValid(value);
  }
  static constexpr EmbeddingFeature EmbeddingFeature_MIN =
    TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_MIN;
  static constexpr EmbeddingFeature EmbeddingFeature_MAX =
    TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_MAX;
  static constexpr int EmbeddingFeature_ARRAYSIZE =
    TPUHardwareFeature_EmbeddingFeature_EmbeddingFeature_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EmbeddingFeature_descriptor() {
    return TPUHardwareFeature_EmbeddingFeature_descriptor();
  }
  template<typename T>
  static inline const std::string& EmbeddingFeature_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EmbeddingFeature>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EmbeddingFeature_Name.");
    return TPUHardwareFeature_EmbeddingFeature_Name(enum_t_value);
  }
  static inline bool EmbeddingFeature_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      EmbeddingFeature* value) {
    return TPUHardwareFeature_EmbeddingFeature_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kEmbeddingFeatureFieldNumber = 1,
  };
  // .tensorflow.tpu.TPUHardwareFeature.EmbeddingFeature embedding_feature = 1;
  void clear_embedding_feature();
  ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature embedding_feature() const;
  void set_embedding_feature(::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature value);
  private:
  ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature _internal_embedding_feature() const;
  void _internal_set_embedding_feature(::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.TPUHardwareFeature)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int embedding_feature_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto;
};
// -------------------------------------------------------------------

class TopologyProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.tpu.TopologyProto) */ {
 public:
  inline TopologyProto() : TopologyProto(nullptr) {}
  ~TopologyProto() override;
  explicit PROTOBUF_CONSTEXPR TopologyProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TopologyProto(const TopologyProto& from);
  TopologyProto(TopologyProto&& from) noexcept
    : TopologyProto() {
    *this = ::std::move(from);
  }

  inline TopologyProto& operator=(const TopologyProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline TopologyProto& operator=(TopologyProto&& from) noexcept {
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
  static const TopologyProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const TopologyProto* internal_default_instance() {
    return reinterpret_cast<const TopologyProto*>(
               &_TopologyProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TopologyProto& a, TopologyProto& b) {
    a.Swap(&b);
  }
  inline void Swap(TopologyProto* other) {
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
  void UnsafeArenaSwap(TopologyProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TopologyProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TopologyProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TopologyProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TopologyProto& from) {
    TopologyProto::MergeImpl(*this, from);
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
  void InternalSwap(TopologyProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.tpu.TopologyProto";
  }
  protected:
  explicit TopologyProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMeshShapeFieldNumber = 1,
    kDeviceCoordinatesFieldNumber = 4,
    kTpuHardwareFeatureFieldNumber = 5,
    kNumTasksFieldNumber = 2,
    kNumTpuDevicesPerTaskFieldNumber = 3,
  };
  // repeated int32 mesh_shape = 1;
  int mesh_shape_size() const;
  private:
  int _internal_mesh_shape_size() const;
  public:
  void clear_mesh_shape();
  private:
  int32_t _internal_mesh_shape(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_mesh_shape() const;
  void _internal_add_mesh_shape(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_mesh_shape();
  public:
  int32_t mesh_shape(int index) const;
  void set_mesh_shape(int index, int32_t value);
  void add_mesh_shape(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      mesh_shape() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_mesh_shape();

  // repeated int32 device_coordinates = 4;
  int device_coordinates_size() const;
  private:
  int _internal_device_coordinates_size() const;
  public:
  void clear_device_coordinates();
  private:
  int32_t _internal_device_coordinates(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_device_coordinates() const;
  void _internal_add_device_coordinates(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_device_coordinates();
  public:
  int32_t device_coordinates(int index) const;
  void set_device_coordinates(int index, int32_t value);
  void add_device_coordinates(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      device_coordinates() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_device_coordinates();

  // .tensorflow.tpu.TPUHardwareFeature tpu_hardware_feature = 5;
  bool has_tpu_hardware_feature() const;
  private:
  bool _internal_has_tpu_hardware_feature() const;
  public:
  void clear_tpu_hardware_feature();
  const ::tensorflow::tpu::TPUHardwareFeature& tpu_hardware_feature() const;
  PROTOBUF_NODISCARD ::tensorflow::tpu::TPUHardwareFeature* release_tpu_hardware_feature();
  ::tensorflow::tpu::TPUHardwareFeature* mutable_tpu_hardware_feature();
  void set_allocated_tpu_hardware_feature(::tensorflow::tpu::TPUHardwareFeature* tpu_hardware_feature);
  private:
  const ::tensorflow::tpu::TPUHardwareFeature& _internal_tpu_hardware_feature() const;
  ::tensorflow::tpu::TPUHardwareFeature* _internal_mutable_tpu_hardware_feature();
  public:
  void unsafe_arena_set_allocated_tpu_hardware_feature(
      ::tensorflow::tpu::TPUHardwareFeature* tpu_hardware_feature);
  ::tensorflow::tpu::TPUHardwareFeature* unsafe_arena_release_tpu_hardware_feature();

  // int32 num_tasks = 2;
  void clear_num_tasks();
  int32_t num_tasks() const;
  void set_num_tasks(int32_t value);
  private:
  int32_t _internal_num_tasks() const;
  void _internal_set_num_tasks(int32_t value);
  public:

  // int32 num_tpu_devices_per_task = 3;
  void clear_num_tpu_devices_per_task();
  int32_t num_tpu_devices_per_task() const;
  void set_num_tpu_devices_per_task(int32_t value);
  private:
  int32_t _internal_num_tpu_devices_per_task() const;
  void _internal_set_num_tpu_devices_per_task(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.tpu.TopologyProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > mesh_shape_;
    mutable std::atomic<int> _mesh_shape_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > device_coordinates_;
    mutable std::atomic<int> _device_coordinates_cached_byte_size_;
    ::tensorflow::tpu::TPUHardwareFeature* tpu_hardware_feature_;
    int32_t num_tasks_;
    int32_t num_tpu_devices_per_task_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TPUHardwareFeature

// .tensorflow.tpu.TPUHardwareFeature.EmbeddingFeature embedding_feature = 1;
inline void TPUHardwareFeature::clear_embedding_feature() {
  _impl_.embedding_feature_ = 0;
}
inline ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature TPUHardwareFeature::_internal_embedding_feature() const {
  return static_cast< ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature >(_impl_.embedding_feature_);
}
inline ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature TPUHardwareFeature::embedding_feature() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TPUHardwareFeature.embedding_feature)
  return _internal_embedding_feature();
}
inline void TPUHardwareFeature::_internal_set_embedding_feature(::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature value) {
  
  _impl_.embedding_feature_ = value;
}
inline void TPUHardwareFeature::set_embedding_feature(::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature value) {
  _internal_set_embedding_feature(value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TPUHardwareFeature.embedding_feature)
}

// -------------------------------------------------------------------

// TopologyProto

// repeated int32 mesh_shape = 1;
inline int TopologyProto::_internal_mesh_shape_size() const {
  return _impl_.mesh_shape_.size();
}
inline int TopologyProto::mesh_shape_size() const {
  return _internal_mesh_shape_size();
}
inline void TopologyProto::clear_mesh_shape() {
  _impl_.mesh_shape_.Clear();
}
inline int32_t TopologyProto::_internal_mesh_shape(int index) const {
  return _impl_.mesh_shape_.Get(index);
}
inline int32_t TopologyProto::mesh_shape(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TopologyProto.mesh_shape)
  return _internal_mesh_shape(index);
}
inline void TopologyProto::set_mesh_shape(int index, int32_t value) {
  _impl_.mesh_shape_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TopologyProto.mesh_shape)
}
inline void TopologyProto::_internal_add_mesh_shape(int32_t value) {
  _impl_.mesh_shape_.Add(value);
}
inline void TopologyProto::add_mesh_shape(int32_t value) {
  _internal_add_mesh_shape(value);
  // @@protoc_insertion_point(field_add:tensorflow.tpu.TopologyProto.mesh_shape)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TopologyProto::_internal_mesh_shape() const {
  return _impl_.mesh_shape_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TopologyProto::mesh_shape() const {
  // @@protoc_insertion_point(field_list:tensorflow.tpu.TopologyProto.mesh_shape)
  return _internal_mesh_shape();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TopologyProto::_internal_mutable_mesh_shape() {
  return &_impl_.mesh_shape_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TopologyProto::mutable_mesh_shape() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tpu.TopologyProto.mesh_shape)
  return _internal_mutable_mesh_shape();
}

// int32 num_tasks = 2;
inline void TopologyProto::clear_num_tasks() {
  _impl_.num_tasks_ = 0;
}
inline int32_t TopologyProto::_internal_num_tasks() const {
  return _impl_.num_tasks_;
}
inline int32_t TopologyProto::num_tasks() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TopologyProto.num_tasks)
  return _internal_num_tasks();
}
inline void TopologyProto::_internal_set_num_tasks(int32_t value) {
  
  _impl_.num_tasks_ = value;
}
inline void TopologyProto::set_num_tasks(int32_t value) {
  _internal_set_num_tasks(value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TopologyProto.num_tasks)
}

// int32 num_tpu_devices_per_task = 3;
inline void TopologyProto::clear_num_tpu_devices_per_task() {
  _impl_.num_tpu_devices_per_task_ = 0;
}
inline int32_t TopologyProto::_internal_num_tpu_devices_per_task() const {
  return _impl_.num_tpu_devices_per_task_;
}
inline int32_t TopologyProto::num_tpu_devices_per_task() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TopologyProto.num_tpu_devices_per_task)
  return _internal_num_tpu_devices_per_task();
}
inline void TopologyProto::_internal_set_num_tpu_devices_per_task(int32_t value) {
  
  _impl_.num_tpu_devices_per_task_ = value;
}
inline void TopologyProto::set_num_tpu_devices_per_task(int32_t value) {
  _internal_set_num_tpu_devices_per_task(value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TopologyProto.num_tpu_devices_per_task)
}

// repeated int32 device_coordinates = 4;
inline int TopologyProto::_internal_device_coordinates_size() const {
  return _impl_.device_coordinates_.size();
}
inline int TopologyProto::device_coordinates_size() const {
  return _internal_device_coordinates_size();
}
inline void TopologyProto::clear_device_coordinates() {
  _impl_.device_coordinates_.Clear();
}
inline int32_t TopologyProto::_internal_device_coordinates(int index) const {
  return _impl_.device_coordinates_.Get(index);
}
inline int32_t TopologyProto::device_coordinates(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TopologyProto.device_coordinates)
  return _internal_device_coordinates(index);
}
inline void TopologyProto::set_device_coordinates(int index, int32_t value) {
  _impl_.device_coordinates_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.tpu.TopologyProto.device_coordinates)
}
inline void TopologyProto::_internal_add_device_coordinates(int32_t value) {
  _impl_.device_coordinates_.Add(value);
}
inline void TopologyProto::add_device_coordinates(int32_t value) {
  _internal_add_device_coordinates(value);
  // @@protoc_insertion_point(field_add:tensorflow.tpu.TopologyProto.device_coordinates)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TopologyProto::_internal_device_coordinates() const {
  return _impl_.device_coordinates_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
TopologyProto::device_coordinates() const {
  // @@protoc_insertion_point(field_list:tensorflow.tpu.TopologyProto.device_coordinates)
  return _internal_device_coordinates();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TopologyProto::_internal_mutable_device_coordinates() {
  return &_impl_.device_coordinates_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
TopologyProto::mutable_device_coordinates() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.tpu.TopologyProto.device_coordinates)
  return _internal_mutable_device_coordinates();
}

// .tensorflow.tpu.TPUHardwareFeature tpu_hardware_feature = 5;
inline bool TopologyProto::_internal_has_tpu_hardware_feature() const {
  return this != internal_default_instance() && _impl_.tpu_hardware_feature_ != nullptr;
}
inline bool TopologyProto::has_tpu_hardware_feature() const {
  return _internal_has_tpu_hardware_feature();
}
inline void TopologyProto::clear_tpu_hardware_feature() {
  if (GetArenaForAllocation() == nullptr && _impl_.tpu_hardware_feature_ != nullptr) {
    delete _impl_.tpu_hardware_feature_;
  }
  _impl_.tpu_hardware_feature_ = nullptr;
}
inline const ::tensorflow::tpu::TPUHardwareFeature& TopologyProto::_internal_tpu_hardware_feature() const {
  const ::tensorflow::tpu::TPUHardwareFeature* p = _impl_.tpu_hardware_feature_;
  return p != nullptr ? *p : reinterpret_cast<const ::tensorflow::tpu::TPUHardwareFeature&>(
      ::tensorflow::tpu::_TPUHardwareFeature_default_instance_);
}
inline const ::tensorflow::tpu::TPUHardwareFeature& TopologyProto::tpu_hardware_feature() const {
  // @@protoc_insertion_point(field_get:tensorflow.tpu.TopologyProto.tpu_hardware_feature)
  return _internal_tpu_hardware_feature();
}
inline void TopologyProto::unsafe_arena_set_allocated_tpu_hardware_feature(
    ::tensorflow::tpu::TPUHardwareFeature* tpu_hardware_feature) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.tpu_hardware_feature_);
  }
  _impl_.tpu_hardware_feature_ = tpu_hardware_feature;
  if (tpu_hardware_feature) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.tpu.TopologyProto.tpu_hardware_feature)
}
inline ::tensorflow::tpu::TPUHardwareFeature* TopologyProto::release_tpu_hardware_feature() {
  
  ::tensorflow::tpu::TPUHardwareFeature* temp = _impl_.tpu_hardware_feature_;
  _impl_.tpu_hardware_feature_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::tensorflow::tpu::TPUHardwareFeature* TopologyProto::unsafe_arena_release_tpu_hardware_feature() {
  // @@protoc_insertion_point(field_release:tensorflow.tpu.TopologyProto.tpu_hardware_feature)
  
  ::tensorflow::tpu::TPUHardwareFeature* temp = _impl_.tpu_hardware_feature_;
  _impl_.tpu_hardware_feature_ = nullptr;
  return temp;
}
inline ::tensorflow::tpu::TPUHardwareFeature* TopologyProto::_internal_mutable_tpu_hardware_feature() {
  
  if (_impl_.tpu_hardware_feature_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::tpu::TPUHardwareFeature>(GetArenaForAllocation());
    _impl_.tpu_hardware_feature_ = p;
  }
  return _impl_.tpu_hardware_feature_;
}
inline ::tensorflow::tpu::TPUHardwareFeature* TopologyProto::mutable_tpu_hardware_feature() {
  ::tensorflow::tpu::TPUHardwareFeature* _msg = _internal_mutable_tpu_hardware_feature();
  // @@protoc_insertion_point(field_mutable:tensorflow.tpu.TopologyProto.tpu_hardware_feature)
  return _msg;
}
inline void TopologyProto::set_allocated_tpu_hardware_feature(::tensorflow::tpu::TPUHardwareFeature* tpu_hardware_feature) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.tpu_hardware_feature_;
  }
  if (tpu_hardware_feature) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(tpu_hardware_feature);
    if (message_arena != submessage_arena) {
      tpu_hardware_feature = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tpu_hardware_feature, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.tpu_hardware_feature_ = tpu_hardware_feature;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.tpu.TopologyProto.tpu_hardware_feature)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tpu
}  // namespace tensorflow

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature>() {
  return ::tensorflow::tpu::TPUHardwareFeature_EmbeddingFeature_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2ftpu_2ftopology_2eproto