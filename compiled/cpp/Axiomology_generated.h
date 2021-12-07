// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_AXIOMOLOGY_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_AXIOMOLOGY_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

namespace ImpresarioSerialization {

struct Axiomology;
struct AxiomologyBuilder;

struct Axiomology FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AxiomologyBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GAIN = 4,
    VT_ENERGY = 6,
    VT_HUE = 8,
    VT_BRIGHTNESS = 10,
    VT_WILDCARDS = 12
  };
  float gain() const {
    return GetField<float>(VT_GAIN, 0.0f);
  }
  float energy() const {
    return GetField<float>(VT_ENERGY, 0.0f);
  }
  float hue() const {
    return GetField<float>(VT_HUE, 0.0f);
  }
  float brightness() const {
    return GetField<float>(VT_BRIGHTNESS, 0.0f);
  }
  const flatbuffers::Vector<float> *wildcards() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_WILDCARDS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_GAIN) &&
           VerifyField<float>(verifier, VT_ENERGY) &&
           VerifyField<float>(verifier, VT_HUE) &&
           VerifyField<float>(verifier, VT_BRIGHTNESS) &&
           VerifyOffset(verifier, VT_WILDCARDS) &&
           verifier.VerifyVector(wildcards()) &&
           verifier.EndTable();
  }
};

struct AxiomologyBuilder {
  typedef Axiomology Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_gain(float gain) {
    fbb_.AddElement<float>(Axiomology::VT_GAIN, gain, 0.0f);
  }
  void add_energy(float energy) {
    fbb_.AddElement<float>(Axiomology::VT_ENERGY, energy, 0.0f);
  }
  void add_hue(float hue) {
    fbb_.AddElement<float>(Axiomology::VT_HUE, hue, 0.0f);
  }
  void add_brightness(float brightness) {
    fbb_.AddElement<float>(Axiomology::VT_BRIGHTNESS, brightness, 0.0f);
  }
  void add_wildcards(flatbuffers::Offset<flatbuffers::Vector<float>> wildcards) {
    fbb_.AddOffset(Axiomology::VT_WILDCARDS, wildcards);
  }
  explicit AxiomologyBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Axiomology> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Axiomology>(end);
    return o;
  }
};

inline flatbuffers::Offset<Axiomology> CreateAxiomology(
    flatbuffers::FlatBufferBuilder &_fbb,
    float gain = 0.0f,
    float energy = 0.0f,
    float hue = 0.0f,
    float brightness = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<float>> wildcards = 0) {
  AxiomologyBuilder builder_(_fbb);
  builder_.add_wildcards(wildcards);
  builder_.add_brightness(brightness);
  builder_.add_hue(hue);
  builder_.add_energy(energy);
  builder_.add_gain(gain);
  return builder_.Finish();
}

inline flatbuffers::Offset<Axiomology> CreateAxiomologyDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    float gain = 0.0f,
    float energy = 0.0f,
    float hue = 0.0f,
    float brightness = 0.0f,
    const std::vector<float> *wildcards = nullptr) {
  auto wildcards__ = wildcards ? _fbb.CreateVector<float>(*wildcards) : 0;
  return ImpresarioSerialization::CreateAxiomology(
      _fbb,
      gain,
      energy,
      hue,
      brightness,
      wildcards__);
}

inline const ImpresarioSerialization::Axiomology *GetAxiomology(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::Axiomology>(buf);
}

inline const ImpresarioSerialization::Axiomology *GetSizePrefixedAxiomology(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::Axiomology>(buf);
}

inline bool VerifyAxiomologyBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::Axiomology>(nullptr);
}

inline bool VerifySizePrefixedAxiomologyBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::Axiomology>(nullptr);
}

inline void FinishAxiomologyBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Axiomology> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAxiomologyBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::Axiomology> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_AXIOMOLOGY_IMPRESARIOSERIALIZATION_H_
