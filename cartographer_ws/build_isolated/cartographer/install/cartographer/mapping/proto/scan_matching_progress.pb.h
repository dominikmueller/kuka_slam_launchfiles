// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching_progress.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto__INCLUDED

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
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();

class ScanMatchingProgress;

// ===================================================================

class ScanMatchingProgress : public ::google::protobuf::Message {
 public:
  ScanMatchingProgress();
  virtual ~ScanMatchingProgress();

  ScanMatchingProgress(const ScanMatchingProgress& from);

  inline ScanMatchingProgress& operator=(const ScanMatchingProgress& from) {
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
  static const ScanMatchingProgress& default_instance();

  void Swap(ScanMatchingProgress* other);

  // implements Message ----------------------------------------------

  ScanMatchingProgress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ScanMatchingProgress& from);
  void MergeFrom(const ScanMatchingProgress& from);
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

  // optional int64 num_scans_finished = 1;
  inline bool has_num_scans_finished() const;
  inline void clear_num_scans_finished();
  static const int kNumScansFinishedFieldNumber = 1;
  inline ::google::protobuf::int64 num_scans_finished() const;
  inline void set_num_scans_finished(::google::protobuf::int64 value);

  // optional int64 num_scans_total = 2;
  inline bool has_num_scans_total() const;
  inline void clear_num_scans_total();
  static const int kNumScansTotalFieldNumber = 2;
  inline ::google::protobuf::int64 num_scans_total() const;
  inline void set_num_scans_total(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ScanMatchingProgress)
 private:
  inline void set_has_num_scans_finished();
  inline void clear_has_num_scans_finished();
  inline void set_has_num_scans_total();
  inline void clear_has_num_scans_total();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 num_scans_finished_;
  ::google::protobuf::int64 num_scans_total_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto();

  void InitAsDefaultInstance();
  static ScanMatchingProgress* default_instance_;
};
// ===================================================================


// ===================================================================

// ScanMatchingProgress

// optional int64 num_scans_finished = 1;
inline bool ScanMatchingProgress::has_num_scans_finished() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScanMatchingProgress::set_has_num_scans_finished() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScanMatchingProgress::clear_has_num_scans_finished() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScanMatchingProgress::clear_num_scans_finished() {
  num_scans_finished_ = GOOGLE_LONGLONG(0);
  clear_has_num_scans_finished();
}
inline ::google::protobuf::int64 ScanMatchingProgress::num_scans_finished() const {
  return num_scans_finished_;
}
inline void ScanMatchingProgress::set_num_scans_finished(::google::protobuf::int64 value) {
  set_has_num_scans_finished();
  num_scans_finished_ = value;
}

// optional int64 num_scans_total = 2;
inline bool ScanMatchingProgress::has_num_scans_total() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ScanMatchingProgress::set_has_num_scans_total() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ScanMatchingProgress::clear_has_num_scans_total() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ScanMatchingProgress::clear_num_scans_total() {
  num_scans_total_ = GOOGLE_LONGLONG(0);
  clear_has_num_scans_total();
}
inline ::google::protobuf::int64 ScanMatchingProgress::num_scans_total() const {
  return num_scans_total_;
}
inline void ScanMatchingProgress::set_num_scans_total(::google::protobuf::int64 value) {
  set_has_num_scans_total();
  num_scans_total_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fscan_5fmatching_5fprogress_2eproto__INCLUDED