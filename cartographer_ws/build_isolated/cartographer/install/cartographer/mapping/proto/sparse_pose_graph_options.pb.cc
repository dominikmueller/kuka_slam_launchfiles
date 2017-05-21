// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/sparse_pose_graph_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/sparse_pose_graph_options.pb.h"

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
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* SparsePoseGraphOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SparsePoseGraphOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/sparse_pose_graph_options.proto");
  GOOGLE_CHECK(file != NULL);
  SparsePoseGraphOptions_descriptor_ = file->message_type(0);
  static const int SparsePoseGraphOptions_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, optimize_every_n_scans_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, constraint_builder_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, optimization_problem_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, max_num_final_iterations_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, global_sampling_ratio_),
  };
  SparsePoseGraphOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SparsePoseGraphOptions_descriptor_,
      SparsePoseGraphOptions::default_instance_,
      SparsePoseGraphOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SparsePoseGraphOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SparsePoseGraphOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SparsePoseGraphOptions_descriptor_, &SparsePoseGraphOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto() {
  delete SparsePoseGraphOptions::default_instance_;
  delete SparsePoseGraphOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping::sparse_pose_graph::proto::protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2fconstraint_5fbuilder_5foptions_2eproto();
  ::cartographer::mapping::sparse_pose_graph::proto::protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n:cartographer/mapping/proto/sparse_pose"
    "_graph_options.proto\022\032cartographer.mappi"
    "ng.proto\032Mcartographer/mapping/sparse_po"
    "se_graph/proto/constraint_builder_option"
    "s.proto\032Ocartographer/mapping/sparse_pos"
    "e_graph/proto/optimization_problem_optio"
    "ns.proto\"\325\002\n\026SparsePoseGraphOptions\022\036\n\026o"
    "ptimize_every_n_scans\030\001 \001(\005\022j\n\032constrain"
    "t_builder_options\030\003 \001(\0132F.cartographer.m"
    "apping.sparse_pose_graph.proto.Constrain"
    "tBuilderOptions\022n\n\034optimization_problem_"
    "options\030\004 \001(\0132H.cartographer.mapping.spa"
    "rse_pose_graph.proto.OptimizationProblem"
    "Options\022 \n\030max_num_final_iterations\030\006 \001("
    "\005\022\035\n\025global_sampling_ratio\030\005 \001(\001", 592);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/sparse_pose_graph_options.proto", &protobuf_RegisterTypes);
  SparsePoseGraphOptions::default_instance_ = new SparsePoseGraphOptions();
  SparsePoseGraphOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SparsePoseGraphOptions::kOptimizeEveryNScansFieldNumber;
const int SparsePoseGraphOptions::kConstraintBuilderOptionsFieldNumber;
const int SparsePoseGraphOptions::kOptimizationProblemOptionsFieldNumber;
const int SparsePoseGraphOptions::kMaxNumFinalIterationsFieldNumber;
const int SparsePoseGraphOptions::kGlobalSamplingRatioFieldNumber;
#endif  // !_MSC_VER

SparsePoseGraphOptions::SparsePoseGraphOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SparsePoseGraphOptions::InitAsDefaultInstance() {
  constraint_builder_options_ = const_cast< ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions*>(&::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions::default_instance());
  optimization_problem_options_ = const_cast< ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions*>(&::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions::default_instance());
}

SparsePoseGraphOptions::SparsePoseGraphOptions(const SparsePoseGraphOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SparsePoseGraphOptions::SharedCtor() {
  _cached_size_ = 0;
  optimize_every_n_scans_ = 0;
  constraint_builder_options_ = NULL;
  optimization_problem_options_ = NULL;
  max_num_final_iterations_ = 0;
  global_sampling_ratio_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SparsePoseGraphOptions::~SparsePoseGraphOptions() {
  SharedDtor();
}

void SparsePoseGraphOptions::SharedDtor() {
  if (this != default_instance_) {
    delete constraint_builder_options_;
    delete optimization_problem_options_;
  }
}

void SparsePoseGraphOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SparsePoseGraphOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SparsePoseGraphOptions_descriptor_;
}

const SparsePoseGraphOptions& SparsePoseGraphOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  return *default_instance_;
}

SparsePoseGraphOptions* SparsePoseGraphOptions::default_instance_ = NULL;

SparsePoseGraphOptions* SparsePoseGraphOptions::New() const {
  return new SparsePoseGraphOptions;
}

void SparsePoseGraphOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    optimize_every_n_scans_ = 0;
    if (has_constraint_builder_options()) {
      if (constraint_builder_options_ != NULL) constraint_builder_options_->::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions::Clear();
    }
    if (has_optimization_problem_options()) {
      if (optimization_problem_options_ != NULL) optimization_problem_options_->::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions::Clear();
    }
    max_num_final_iterations_ = 0;
    global_sampling_ratio_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SparsePoseGraphOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 optimize_every_n_scans = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &optimize_every_n_scans_)));
          set_has_optimize_every_n_scans();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_constraint_builder_options;
        break;
      }

      // optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_constraint_builder_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_constraint_builder_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_optimization_problem_options;
        break;
      }

      // optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_optimization_problem_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_optimization_problem_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(41)) goto parse_global_sampling_ratio;
        break;
      }

      // optional double global_sampling_ratio = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_global_sampling_ratio:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &global_sampling_ratio_)));
          set_has_global_sampling_ratio();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_max_num_final_iterations;
        break;
      }

      // optional int32 max_num_final_iterations = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_num_final_iterations:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_num_final_iterations_)));
          set_has_max_num_final_iterations();
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

void SparsePoseGraphOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 optimize_every_n_scans = 1;
  if (has_optimize_every_n_scans()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->optimize_every_n_scans(), output);
  }

  // optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
  if (has_constraint_builder_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->constraint_builder_options(), output);
  }

  // optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
  if (has_optimization_problem_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->optimization_problem_options(), output);
  }

  // optional double global_sampling_ratio = 5;
  if (has_global_sampling_ratio()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->global_sampling_ratio(), output);
  }

  // optional int32 max_num_final_iterations = 6;
  if (has_max_num_final_iterations()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->max_num_final_iterations(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SparsePoseGraphOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 optimize_every_n_scans = 1;
  if (has_optimize_every_n_scans()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->optimize_every_n_scans(), target);
  }

  // optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
  if (has_constraint_builder_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->constraint_builder_options(), target);
  }

  // optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
  if (has_optimization_problem_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->optimization_problem_options(), target);
  }

  // optional double global_sampling_ratio = 5;
  if (has_global_sampling_ratio()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->global_sampling_ratio(), target);
  }

  // optional int32 max_num_final_iterations = 6;
  if (has_max_num_final_iterations()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->max_num_final_iterations(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SparsePoseGraphOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 optimize_every_n_scans = 1;
    if (has_optimize_every_n_scans()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->optimize_every_n_scans());
    }

    // optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
    if (has_constraint_builder_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->constraint_builder_options());
    }

    // optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
    if (has_optimization_problem_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->optimization_problem_options());
    }

    // optional int32 max_num_final_iterations = 6;
    if (has_max_num_final_iterations()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_num_final_iterations());
    }

    // optional double global_sampling_ratio = 5;
    if (has_global_sampling_ratio()) {
      total_size += 1 + 8;
    }

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

void SparsePoseGraphOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SparsePoseGraphOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SparsePoseGraphOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SparsePoseGraphOptions::MergeFrom(const SparsePoseGraphOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_optimize_every_n_scans()) {
      set_optimize_every_n_scans(from.optimize_every_n_scans());
    }
    if (from.has_constraint_builder_options()) {
      mutable_constraint_builder_options()->::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions::MergeFrom(from.constraint_builder_options());
    }
    if (from.has_optimization_problem_options()) {
      mutable_optimization_problem_options()->::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions::MergeFrom(from.optimization_problem_options());
    }
    if (from.has_max_num_final_iterations()) {
      set_max_num_final_iterations(from.max_num_final_iterations());
    }
    if (from.has_global_sampling_ratio()) {
      set_global_sampling_ratio(from.global_sampling_ratio());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SparsePoseGraphOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SparsePoseGraphOptions::CopyFrom(const SparsePoseGraphOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SparsePoseGraphOptions::IsInitialized() const {

  return true;
}

void SparsePoseGraphOptions::Swap(SparsePoseGraphOptions* other) {
  if (other != this) {
    std::swap(optimize_every_n_scans_, other->optimize_every_n_scans_);
    std::swap(constraint_builder_options_, other->constraint_builder_options_);
    std::swap(optimization_problem_options_, other->optimization_problem_options_);
    std::swap(max_num_final_iterations_, other->max_num_final_iterations_);
    std::swap(global_sampling_ratio_, other->global_sampling_ratio_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SparsePoseGraphOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SparsePoseGraphOptions_descriptor_;
  metadata.reflection = SparsePoseGraphOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
