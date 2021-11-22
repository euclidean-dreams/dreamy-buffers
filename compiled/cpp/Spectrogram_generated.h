// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SPECTROGRAM_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_SPECTROGRAM_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

namespace ImpresarioSerialization {

struct Spectrogram;

struct Spectrogram FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ORIGINTIMESTAMP = 4,
    VT_MAGNITUDES = 6,
    VT_SPECTRALFLUXES = 8,
    VT_FLUXYFLUXES = 10,
    VT_PEAKS = 12,
    VT_FIRED = 14
  };
  uint64_t originTimestamp() const {
    return GetField<uint64_t>(VT_ORIGINTIMESTAMP, 0);
  }
  const flatbuffers::Vector<float> *magnitudes() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_MAGNITUDES);
  }
  const flatbuffers::Vector<float> *spectralFluxes() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_SPECTRALFLUXES);
  }
  const flatbuffers::Vector<float> *fluxyFluxes() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_FLUXYFLUXES);
  }
  const flatbuffers::Vector<float> *peaks() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_PEAKS);
  }
  const flatbuffers::Vector<float> *fired() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_FIRED);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ORIGINTIMESTAMP) &&
           VerifyOffset(verifier, VT_MAGNITUDES) &&
           verifier.VerifyVector(magnitudes()) &&
           VerifyOffset(verifier, VT_SPECTRALFLUXES) &&
           verifier.VerifyVector(spectralFluxes()) &&
           VerifyOffset(verifier, VT_FLUXYFLUXES) &&
           verifier.VerifyVector(fluxyFluxes()) &&
           VerifyOffset(verifier, VT_PEAKS) &&
           verifier.VerifyVector(peaks()) &&
           VerifyOffset(verifier, VT_FIRED) &&
           verifier.VerifyVector(fired()) &&
           verifier.EndTable();
  }
};

struct SpectrogramBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_originTimestamp(uint64_t originTimestamp) {
    fbb_.AddElement<uint64_t>(Spectrogram::VT_ORIGINTIMESTAMP, originTimestamp, 0);
  }
  void add_magnitudes(flatbuffers::Offset<flatbuffers::Vector<float>> magnitudes) {
    fbb_.AddOffset(Spectrogram::VT_MAGNITUDES, magnitudes);
  }
  void add_spectralFluxes(flatbuffers::Offset<flatbuffers::Vector<float>> spectralFluxes) {
    fbb_.AddOffset(Spectrogram::VT_SPECTRALFLUXES, spectralFluxes);
  }
  void add_fluxyFluxes(flatbuffers::Offset<flatbuffers::Vector<float>> fluxyFluxes) {
    fbb_.AddOffset(Spectrogram::VT_FLUXYFLUXES, fluxyFluxes);
  }
  void add_peaks(flatbuffers::Offset<flatbuffers::Vector<float>> peaks) {
    fbb_.AddOffset(Spectrogram::VT_PEAKS, peaks);
  }
  void add_fired(flatbuffers::Offset<flatbuffers::Vector<float>> fired) {
    fbb_.AddOffset(Spectrogram::VT_FIRED, fired);
  }
  explicit SpectrogramBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SpectrogramBuilder &operator=(const SpectrogramBuilder &);
  flatbuffers::Offset<Spectrogram> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Spectrogram>(end);
    return o;
  }
};

inline flatbuffers::Offset<Spectrogram> CreateSpectrogram(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t originTimestamp = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> magnitudes = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> spectralFluxes = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> fluxyFluxes = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> peaks = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> fired = 0) {
  SpectrogramBuilder builder_(_fbb);
  builder_.add_originTimestamp(originTimestamp);
  builder_.add_fired(fired);
  builder_.add_peaks(peaks);
  builder_.add_fluxyFluxes(fluxyFluxes);
  builder_.add_spectralFluxes(spectralFluxes);
  builder_.add_magnitudes(magnitudes);
  return builder_.Finish();
}

inline flatbuffers::Offset<Spectrogram> CreateSpectrogramDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t originTimestamp = 0,
    const std::vector<float> *magnitudes = nullptr,
    const std::vector<float> *spectralFluxes = nullptr,
    const std::vector<float> *fluxyFluxes = nullptr,
    const std::vector<float> *peaks = nullptr,
    const std::vector<float> *fired = nullptr) {
  auto magnitudes__ = magnitudes ? _fbb.CreateVector<float>(*magnitudes) : 0;
  auto spectralFluxes__ = spectralFluxes ? _fbb.CreateVector<float>(*spectralFluxes) : 0;
  auto fluxyFluxes__ = fluxyFluxes ? _fbb.CreateVector<float>(*fluxyFluxes) : 0;
  auto peaks__ = peaks ? _fbb.CreateVector<float>(*peaks) : 0;
  auto fired__ = fired ? _fbb.CreateVector<float>(*fired) : 0;
  return ImpresarioSerialization::CreateSpectrogram(
      _fbb,
      originTimestamp,
      magnitudes__,
      spectralFluxes__,
      fluxyFluxes__,
      peaks__,
      fired__);
}

inline const ImpresarioSerialization::Spectrogram *GetSpectrogram(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::Spectrogram>(buf);
}

inline const ImpresarioSerialization::Spectrogram *GetSizePrefixedSpectrogram(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::Spectrogram>(buf);
}

inline bool VerifySpectrogramBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::Spectrogram>(nullptr);
}

inline bool VerifySizePrefixedSpectrogramBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::Spectrogram>(nullptr);
}

inline void FinishSpectrogramBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Spectrogram> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSpectrogramBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Spectrogram> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_SPECTROGRAM_IMPRESARIOSERIALIZATION_H_
