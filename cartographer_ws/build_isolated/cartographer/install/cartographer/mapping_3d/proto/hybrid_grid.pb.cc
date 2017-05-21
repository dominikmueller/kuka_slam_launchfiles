// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_3d/proto/hybrid_grid.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_3d/proto/hybrid_grid.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_3d {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* HybridGrid_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HybridGrid_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_3d/proto/hybrid_grid.proto");
  GOOGLE_CHECK(file != NULL);
  HybridGrid_descriptor_ = file->message_type(0);
  static const int HybridGrid_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, resolution_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, origin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, x_indices_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, y_indices_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, z_indices_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, values_),
  };
  HybridGrid_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HybridGrid_descriptor_,
      HybridGrid::default_instance_,
      HybridGrid_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HybridGrid, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HybridGrid));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HybridGrid_descriptor_, &HybridGrid::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto() {
  delete HybridGrid::default_instance_;
  delete HybridGrid_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::transform::proto::protobuf_AddDesc_cartographer_2ftransform_2fproto_2ftransform_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/cartographer/mapping_3d/proto/hybrid_g"
    "rid.proto\022\035cartographer.mapping_3d.proto"
    "\032,cartographer/transform/proto/transform"
    ".proto\"\261\001\n\nHybridGrid\022\022\n\nresolution\030\001 \001("
    "\002\0226\n\006origin\030\002 \001(\0132&.cartographer.transfo"
    "rm.proto.Vector3f\022\025\n\tx_indices\030\003 \003(\021B\002\020\001"
    "\022\025\n\ty_indices\030\004 \003(\021B\002\020\001\022\025\n\tz_indices\030\005 \003"
    "(\021B\002\020\001\022\022\n\006values\030\006 \003(\005B\002\020\001", 306);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_3d/proto/hybrid_grid.proto", &protobuf_RegisterTypes);
  HybridGrid::default_instance_ = new HybridGrid();
  HybridGrid::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int HybridGrid::kResolutionFieldNumber;
const int HybridGrid::kOriginFieldNumber;
const int HybridGrid::kXIndicesFieldNumber;
const int HybridGrid::kYIndicesFieldNumber;
const int HybridGrid::kZIndicesFieldNumber;
const int HybridGrid::kValuesFieldNumber;
#endif  // !_MSC_VER

HybridGrid::HybridGrid()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HybridGrid::InitAsDefaultInstance() {
  origin_ = const_cast< ::cartographer::transform::proto::Vector3f*>(&::cartographer::transform::proto::Vector3f::default_instance());
}

HybridGrid::HybridGrid(const HybridGrid& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HybridGrid::SharedCtor() {
  _cached_size_ = 0;
  resolution_ = 0;
  origin_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HybridGrid::~HybridGrid() {
  SharedDtor();
}

void HybridGrid::SharedDtor() {
  if (this != default_instance_) {
    delete origin_;
  }
}

void HybridGrid::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HybridGrid::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HybridGrid_descriptor_;
}

const HybridGrid& HybridGrid::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fhybrid_5fgrid_2eproto();
  return *default_instance_;
}

HybridGrid* HybridGrid::default_instance_ = NULL;

HybridGrid* HybridGrid::New() const {
  return new HybridGrid;
}

void HybridGrid::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    resolution_ = 0;
    if (has_origin()) {
      if (origin_ != NULL) origin_->::cartographer::transform::proto::Vector3f::Clear();
    }
  }
  x_indices_.Clear();
  y_indices_.Clear();
  z_indices_.Clear();
  values_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HybridGrid::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float resolution = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &resolution_)));
          set_has_resolution();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_origin;
        break;
      }

      // optional .cartographer.transform.proto.Vector3f origin = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_origin:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_origin()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_x_indices;
        break;
      }

      // repeated sint32 x_indices = 3 [packed = true];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_x_indices:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, this->mutable_x_indices())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 1, 26, input, this->mutable_x_indices())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_y_indices;
        break;
      }

      // repeated sint32 y_indices = 4 [packed = true];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_y_indices:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, this->mutable_y_indices())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 1, 34, input, this->mutable_y_indices())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_z_indices;
        break;
      }

      // repeated sint32 z_indices = 5 [packed = true];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_z_indices:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, this->mutable_z_indices())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 1, 42, input, this->mutable_z_indices())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_values;
        break;
      }

      // repeated int32 values = 6 [packed = true];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_values:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_values())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 50, input, this->mutable_values())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HybridGrid::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float resolution = 1;
  if (has_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->resolution(), output);
  }

  // optional .cartographer.transform.proto.Vector3f origin = 2;
  if (has_origin()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->origin(), output);
  }

  // repeated sint32 x_indices = 3 [packed = true];
  if (this->x_indices_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_x_indices_cached_byte_size_);
  }
  for (int i = 0; i < this->x_indices_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(
      this->x_indices(i), output);
  }

  // repeated sint32 y_indices = 4 [packed = true];
  if (this->y_indices_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_y_indices_cached_byte_size_);
  }
  for (int i = 0; i < this->y_indices_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(
      this->y_indices(i), output);
  }

  // repeated sint32 z_indices = 5 [packed = true];
  if (this->z_indices_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_z_indices_cached_byte_size_);
  }
  for (int i = 0; i < this->z_indices_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(
      this->z_indices(i), output);
  }

  // repeated int32 values = 6 [packed = true];
  if (this->values_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_values_cached_byte_size_);
  }
  for (int i = 0; i < this->values_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->values(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HybridGrid::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float resolution = 1;
  if (has_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->resolution(), target);
  }

  // optional .cartographer.transform.proto.Vector3f origin = 2;
  if (has_origin()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->origin(), target);
  }

  // repeated sint32 x_indices = 3 [packed = true];
  if (this->x_indices_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _x_indices_cached_byte_size_, target);
  }
  for (int i = 0; i < this->x_indices_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteSInt32NoTagToArray(this->x_indices(i), target);
  }

  // repeated sint32 y_indices = 4 [packed = true];
  if (this->y_indices_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _y_indices_cached_byte_size_, target);
  }
  for (int i = 0; i < this->y_indices_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteSInt32NoTagToArray(this->y_indices(i), target);
  }

  // repeated sint32 z_indices = 5 [packed = true];
  if (this->z_indices_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _z_indices_cached_byte_size_, target);
  }
  for (int i = 0; i < this->z_indices_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteSInt32NoTagToArray(this->z_indices(i), target);
  }

  // repeated int32 values = 6 [packed = true];
  if (this->values_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _values_cached_byte_size_, target);
  }
  for (int i = 0; i < this->values_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->values(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HybridGrid::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float resolution = 1;
    if (has_resolution()) {
      total_size += 1 + 4;
    }

    // optional .cartographer.transform.proto.Vector3f origin = 2;
    if (has_origin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->origin());
    }

  }
  // repeated sint32 x_indices = 3 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->x_indices_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        SInt32Size(this->x_indices(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _x_indices_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated sint32 y_indices = 4 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->y_indices_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        SInt32Size(this->y_indices(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _y_indices_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated sint32 z_indices = 5 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->z_indices_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        SInt32Size(this->z_indices(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _z_indices_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 values = 6 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->values_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->values(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _values_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HybridGrid::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HybridGrid* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HybridGrid*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HybridGrid::MergeFrom(const HybridGrid& from) {
  GOOGLE_CHECK_NE(&from, this);
  x_indices_.MergeFrom(from.x_indices_);
  y_indices_.MergeFrom(from.y_indices_);
  z_indices_.MergeFrom(from.z_indices_);
  values_.MergeFrom(from.values_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_resolution()) {
      set_resolution(from.resolution());
    }
    if (from.has_origin()) {
      mutable_origin()->::cartographer::transform::proto::Vector3f::MergeFrom(from.origin());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HybridGrid::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HybridGrid::CopyFrom(const HybridGrid& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HybridGrid::IsInitialized() const {

  return true;
}

void HybridGrid::Swap(HybridGrid* other) {
  if (other != this) {
    std::swap(resolution_, other->resolution_);
    std::swap(origin_, other->origin_);
    x_indices_.Swap(&other->x_indices_);
    y_indices_.Swap(&other->y_indices_);
    z_indices_.Swap(&other->z_indices_);
    values_.Swap(&other->values_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HybridGrid::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HybridGrid_descriptor_;
  metadata.reflection = HybridGrid_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_3d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
