// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ONSET_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_ONSET_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

#include "FrequencyBand_generated.h"
#include "OnsetMethod_generated.h"

namespace ImpresarioSerialization {

struct Onset;
struct OnsetBuilder;

struct Onset FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OnsetBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SAMPLETIMESTAMP = 4,
    VT_FREQUENCYBAND = 6,
    VT_METHOD = 8,
    VT_TIMESTAMP = 10
  };
  uint64_t sampleTimestamp() const {
    return GetField<uint64_t>(VT_SAMPLETIMESTAMP, 0);
  }
  ImpresarioSerialization::FrequencyBand frequencyBand() const {
    return static_cast<ImpresarioSerialization::FrequencyBand>(GetField<int8_t>(VT_FREQUENCYBAND, 0));
  }
  ImpresarioSerialization::OnsetMethod method() const {
    return static_cast<ImpresarioSerialization::OnsetMethod>(GetField<int8_t>(VT_METHOD, 0));
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_SAMPLETIMESTAMP) &&
           VerifyField<int8_t>(verifier, VT_FREQUENCYBAND) &&
           VerifyField<int8_t>(verifier, VT_METHOD) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP) &&
           verifier.EndTable();
  }
};

struct OnsetBuilder {
  typedef Onset Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sampleTimestamp(uint64_t sampleTimestamp) {
    fbb_.AddElement<uint64_t>(Onset::VT_SAMPLETIMESTAMP, sampleTimestamp, 0);
  }
  void add_frequencyBand(ImpresarioSerialization::FrequencyBand frequencyBand) {
    fbb_.AddElement<int8_t>(Onset::VT_FREQUENCYBAND, static_cast<int8_t>(frequencyBand), 0);
  }
  void add_method(ImpresarioSerialization::OnsetMethod method) {
    fbb_.AddElement<int8_t>(Onset::VT_METHOD, static_cast<int8_t>(method), 0);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(Onset::VT_TIMESTAMP, timestamp, 0);
  }
  explicit OnsetBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  OnsetBuilder &operator=(const OnsetBuilder &);
  flatbuffers::Offset<Onset> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Onset>(end);
    return o;
  }
};

inline flatbuffers::Offset<Onset> CreateOnset(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t sampleTimestamp = 0,
    ImpresarioSerialization::FrequencyBand frequencyBand = ImpresarioSerialization::FrequencyBand::all,
    ImpresarioSerialization::OnsetMethod method = ImpresarioSerialization::OnsetMethod::energy,
    uint64_t timestamp = 0) {
  OnsetBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_sampleTimestamp(sampleTimestamp);
  builder_.add_method(method);
  builder_.add_frequencyBand(frequencyBand);
  return builder_.Finish();
}

inline const ImpresarioSerialization::Onset *GetOnset(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::Onset>(buf);
}

inline const ImpresarioSerialization::Onset *GetSizePrefixedOnset(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::Onset>(buf);
}

inline bool VerifyOnsetBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::Onset>(nullptr);
}

inline bool VerifySizePrefixedOnsetBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::Onset>(nullptr);
}

inline void FinishOnsetBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Onset> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedOnsetBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Onset> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_ONSET_IMPRESARIOSERIALIZATION_H_
