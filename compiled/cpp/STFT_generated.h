// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_STFT_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_STFT_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

namespace ImpresarioSerialization {

struct STFT;
struct STFTBuilder;

struct STFT FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef STFTBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ORIGINTIMESTAMP = 4,
    VT_MAGNITUDES = 6
  };
  uint64_t originTimestamp() const {
    return GetField<uint64_t>(VT_ORIGINTIMESTAMP, 0);
  }
  const flatbuffers::Vector<float> *magnitudes() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_MAGNITUDES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ORIGINTIMESTAMP) &&
           VerifyOffset(verifier, VT_MAGNITUDES) &&
           verifier.VerifyVector(magnitudes()) &&
           verifier.EndTable();
  }
};

struct STFTBuilder {
  typedef STFT Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_originTimestamp(uint64_t originTimestamp) {
    fbb_.AddElement<uint64_t>(STFT::VT_ORIGINTIMESTAMP, originTimestamp, 0);
  }
  void add_magnitudes(flatbuffers::Offset<flatbuffers::Vector<float>> magnitudes) {
    fbb_.AddOffset(STFT::VT_MAGNITUDES, magnitudes);
  }
  explicit STFTBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  STFTBuilder &operator=(const STFTBuilder &);
  flatbuffers::Offset<STFT> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<STFT>(end);
    return o;
  }
};

inline flatbuffers::Offset<STFT> CreateSTFT(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t originTimestamp = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> magnitudes = 0) {
  STFTBuilder builder_(_fbb);
  builder_.add_originTimestamp(originTimestamp);
  builder_.add_magnitudes(magnitudes);
  return builder_.Finish();
}

inline flatbuffers::Offset<STFT> CreateSTFTDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t originTimestamp = 0,
    const std::vector<float> *magnitudes = nullptr) {
  auto magnitudes__ = magnitudes ? _fbb.CreateVector<float>(*magnitudes) : 0;
  return ImpresarioSerialization::CreateSTFT(
      _fbb,
      originTimestamp,
      magnitudes__);
}

inline const ImpresarioSerialization::STFT *GetSTFT(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::STFT>(buf);
}

inline const ImpresarioSerialization::STFT *GetSizePrefixedSTFT(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::STFT>(buf);
}

inline bool VerifySTFTBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::STFT>(nullptr);
}

inline bool VerifySizePrefixedSTFTBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::STFT>(nullptr);
}

inline void FinishSTFTBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::STFT> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSTFTBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::STFT> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_STFT_IMPRESARIOSERIALIZATION_H_