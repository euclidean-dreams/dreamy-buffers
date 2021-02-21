// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ONSETAGGREGATE_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_ONSETAGGREGATE_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

#include "OnsetMethod_generated.h"

namespace ImpresarioSerialization {

struct OnsetAggregate;
struct OnsetAggregateBuilder;

struct OnsetAggregate FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OnsetAggregateBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMPS = 4,
    VT_METHODS = 6
  };
  const flatbuffers::Vector<uint64_t> *timestamps() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_TIMESTAMPS);
  }
  const flatbuffers::Vector<int8_t> *methods() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_METHODS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TIMESTAMPS) &&
           verifier.VerifyVector(timestamps()) &&
           VerifyOffset(verifier, VT_METHODS) &&
           verifier.VerifyVector(methods()) &&
           verifier.EndTable();
  }
};

struct OnsetAggregateBuilder {
  typedef OnsetAggregate Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_timestamps(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> timestamps) {
    fbb_.AddOffset(OnsetAggregate::VT_TIMESTAMPS, timestamps);
  }
  void add_methods(flatbuffers::Offset<flatbuffers::Vector<int8_t>> methods) {
    fbb_.AddOffset(OnsetAggregate::VT_METHODS, methods);
  }
  explicit OnsetAggregateBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  OnsetAggregateBuilder &operator=(const OnsetAggregateBuilder &);
  flatbuffers::Offset<OnsetAggregate> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<OnsetAggregate>(end);
    return o;
  }
};

inline flatbuffers::Offset<OnsetAggregate> CreateOnsetAggregate(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> timestamps = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> methods = 0) {
  OnsetAggregateBuilder builder_(_fbb);
  builder_.add_methods(methods);
  builder_.add_timestamps(timestamps);
  return builder_.Finish();
}

inline flatbuffers::Offset<OnsetAggregate> CreateOnsetAggregateDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint64_t> *timestamps = nullptr,
    const std::vector<int8_t> *methods = nullptr) {
  auto timestamps__ = timestamps ? _fbb.CreateVector<uint64_t>(*timestamps) : 0;
  auto methods__ = methods ? _fbb.CreateVector<int8_t>(*methods) : 0;
  return ImpresarioSerialization::CreateOnsetAggregate(
      _fbb,
      timestamps__,
      methods__);
}

inline const ImpresarioSerialization::OnsetAggregate *GetOnsetAggregate(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::OnsetAggregate>(buf);
}

inline const ImpresarioSerialization::OnsetAggregate *GetSizePrefixedOnsetAggregate(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::OnsetAggregate>(buf);
}

inline bool VerifyOnsetAggregateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::OnsetAggregate>(nullptr);
}

inline bool VerifySizePrefixedOnsetAggregateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::OnsetAggregate>(nullptr);
}

inline void FinishOnsetAggregateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::OnsetAggregate> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedOnsetAggregateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::OnsetAggregate> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_ONSETAGGREGATE_IMPRESARIOSERIALIZATION_H_
