// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/kalman_filter/proto/pose_tracker_options.proto

#ifndef PROTOBUF_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace kalman_filter {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();

class PoseTrackerOptions;

// ===================================================================

class PoseTrackerOptions : public ::google::protobuf::Message {
 public:
  PoseTrackerOptions();
  virtual ~PoseTrackerOptions();

  PoseTrackerOptions(const PoseTrackerOptions& from);

  inline PoseTrackerOptions& operator=(const PoseTrackerOptions& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PoseTrackerOptions& default_instance();

  void Swap(PoseTrackerOptions* other);

  // implements Message ----------------------------------------------

  PoseTrackerOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoseTrackerOptions& from);
  void MergeFrom(const PoseTrackerOptions& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional double position_model_variance = 1;
  inline bool has_position_model_variance() const;
  inline void clear_position_model_variance();
  static const int kPositionModelVarianceFieldNumber = 1;
  inline double position_model_variance() const;
  inline void set_position_model_variance(double value);

  // optional double orientation_model_variance = 2;
  inline bool has_orientation_model_variance() const;
  inline void clear_orientation_model_variance();
  static const int kOrientationModelVarianceFieldNumber = 2;
  inline double orientation_model_variance() const;
  inline void set_orientation_model_variance(double value);

  // optional double velocity_model_variance = 3;
  inline bool has_velocity_model_variance() const;
  inline void clear_velocity_model_variance();
  static const int kVelocityModelVarianceFieldNumber = 3;
  inline double velocity_model_variance() const;
  inline void set_velocity_model_variance(double value);

  // optional double imu_gravity_time_constant = 4;
  inline bool has_imu_gravity_time_constant() const;
  inline void clear_imu_gravity_time_constant();
  static const int kImuGravityTimeConstantFieldNumber = 4;
  inline double imu_gravity_time_constant() const;
  inline void set_imu_gravity_time_constant(double value);

  // optional double imu_gravity_variance = 5;
  inline bool has_imu_gravity_variance() const;
  inline void clear_imu_gravity_variance();
  static const int kImuGravityVarianceFieldNumber = 5;
  inline double imu_gravity_variance() const;
  inline void set_imu_gravity_variance(double value);

  // optional int32 num_odometry_states = 6;
  inline bool has_num_odometry_states() const;
  inline void clear_num_odometry_states();
  static const int kNumOdometryStatesFieldNumber = 6;
  inline ::google::protobuf::int32 num_odometry_states() const;
  inline void set_num_odometry_states(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.kalman_filter.proto.PoseTrackerOptions)
 private:
  inline void set_has_position_model_variance();
  inline void clear_has_position_model_variance();
  inline void set_has_orientation_model_variance();
  inline void clear_has_orientation_model_variance();
  inline void set_has_velocity_model_variance();
  inline void clear_has_velocity_model_variance();
  inline void set_has_imu_gravity_time_constant();
  inline void clear_has_imu_gravity_time_constant();
  inline void set_has_imu_gravity_variance();
  inline void clear_has_imu_gravity_variance();
  inline void set_has_num_odometry_states();
  inline void clear_has_num_odometry_states();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double position_model_variance_;
  double orientation_model_variance_;
  double velocity_model_variance_;
  double imu_gravity_time_constant_;
  double imu_gravity_variance_;
  ::google::protobuf::int32 num_odometry_states_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();

  void InitAsDefaultInstance();
  static PoseTrackerOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// PoseTrackerOptions

// optional double position_model_variance = 1;
inline bool PoseTrackerOptions::has_position_model_variance() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PoseTrackerOptions::set_has_position_model_variance() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PoseTrackerOptions::clear_has_position_model_variance() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PoseTrackerOptions::clear_position_model_variance() {
  position_model_variance_ = 0;
  clear_has_position_model_variance();
}
inline double PoseTrackerOptions::position_model_variance() const {
  return position_model_variance_;
}
inline void PoseTrackerOptions::set_position_model_variance(double value) {
  set_has_position_model_variance();
  position_model_variance_ = value;
}

// optional double orientation_model_variance = 2;
inline bool PoseTrackerOptions::has_orientation_model_variance() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PoseTrackerOptions::set_has_orientation_model_variance() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PoseTrackerOptions::clear_has_orientation_model_variance() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PoseTrackerOptions::clear_orientation_model_variance() {
  orientation_model_variance_ = 0;
  clear_has_orientation_model_variance();
}
inline double PoseTrackerOptions::orientation_model_variance() const {
  return orientation_model_variance_;
}
inline void PoseTrackerOptions::set_orientation_model_variance(double value) {
  set_has_orientation_model_variance();
  orientation_model_variance_ = value;
}

// optional double velocity_model_variance = 3;
inline bool PoseTrackerOptions::has_velocity_model_variance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PoseTrackerOptions::set_has_velocity_model_variance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PoseTrackerOptions::clear_has_velocity_model_variance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PoseTrackerOptions::clear_velocity_model_variance() {
  velocity_model_variance_ = 0;
  clear_has_velocity_model_variance();
}
inline double PoseTrackerOptions::velocity_model_variance() const {
  return velocity_model_variance_;
}
inline void PoseTrackerOptions::set_velocity_model_variance(double value) {
  set_has_velocity_model_variance();
  velocity_model_variance_ = value;
}

// optional double imu_gravity_time_constant = 4;
inline bool PoseTrackerOptions::has_imu_gravity_time_constant() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PoseTrackerOptions::set_has_imu_gravity_time_constant() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PoseTrackerOptions::clear_has_imu_gravity_time_constant() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PoseTrackerOptions::clear_imu_gravity_time_constant() {
  imu_gravity_time_constant_ = 0;
  clear_has_imu_gravity_time_constant();
}
inline double PoseTrackerOptions::imu_gravity_time_constant() const {
  return imu_gravity_time_constant_;
}
inline void PoseTrackerOptions::set_imu_gravity_time_constant(double value) {
  set_has_imu_gravity_time_constant();
  imu_gravity_time_constant_ = value;
}

// optional double imu_gravity_variance = 5;
inline bool PoseTrackerOptions::has_imu_gravity_variance() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PoseTrackerOptions::set_has_imu_gravity_variance() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PoseTrackerOptions::clear_has_imu_gravity_variance() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PoseTrackerOptions::clear_imu_gravity_variance() {
  imu_gravity_variance_ = 0;
  clear_has_imu_gravity_variance();
}
inline double PoseTrackerOptions::imu_gravity_variance() const {
  return imu_gravity_variance_;
}
inline void PoseTrackerOptions::set_imu_gravity_variance(double value) {
  set_has_imu_gravity_variance();
  imu_gravity_variance_ = value;
}

// optional int32 num_odometry_states = 6;
inline bool PoseTrackerOptions::has_num_odometry_states() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PoseTrackerOptions::set_has_num_odometry_states() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PoseTrackerOptions::clear_has_num_odometry_states() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PoseTrackerOptions::clear_num_odometry_states() {
  num_odometry_states_ = 0;
  clear_has_num_odometry_states();
}
inline ::google::protobuf::int32 PoseTrackerOptions::num_odometry_states() const {
  return num_odometry_states_;
}
inline void PoseTrackerOptions::set_num_odometry_states(::google::protobuf::int32 value) {
  set_has_num_odometry_states();
  num_odometry_states_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace kalman_filter
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto__INCLUDED
