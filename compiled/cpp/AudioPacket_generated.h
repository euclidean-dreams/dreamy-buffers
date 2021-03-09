// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_AUDIOPACKET_IMPRESARIOSERIALIZATION_H_
#define FLATBUFFERS_GENERATED_AUDIOPACKET_IMPRESARIOSERIALIZATION_H_

#include "flatbuffers/flatbuffers.h"

namespace ImpresarioSerialization {

struct AudioPacket;

struct AudioPacket FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_SAMPLES = 6
  };
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  const flatbuffers::Vector<float> *samples() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_SAMPLES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP) &&
           VerifyOffset(verifier, VT_SAMPLES) &&
           verifier.VerifyVector(samples()) &&
           verifier.EndTable();
  }
};

struct AudioPacketBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(AudioPacket::VT_TIMESTAMP, timestamp, 0);
  }
  void add_samples(flatbuffers::Offset<flatbuffers::Vector<float>> samples) {
    fbb_.AddOffset(AudioPacket::VT_SAMPLES, samples);
  }
  explicit AudioPacketBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AudioPacketBuilder &operator=(const AudioPacketBuilder &);
  flatbuffers::Offset<AudioPacket> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AudioPacket>(end);
    return o;
  }
};

inline flatbuffers::Offset<AudioPacket> CreateAudioPacket(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t timestamp = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> samples = 0) {
  AudioPacketBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_samples(samples);
  return builder_.Finish();
}

inline flatbuffers::Offset<AudioPacket> CreateAudioPacketDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t timestamp = 0,
    const std::vector<float> *samples = nullptr) {
  auto samples__ = samples ? _fbb.CreateVector<float>(*samples) : 0;
  return ImpresarioSerialization::CreateAudioPacket(
      _fbb,
      timestamp,
      samples__);
}

inline const ImpresarioSerialization::AudioPacket *GetAudioPacket(const void *buf) {
  return flatbuffers::GetRoot<ImpresarioSerialization::AudioPacket>(buf);
}

inline const ImpresarioSerialization::AudioPacket *GetSizePrefixedAudioPacket(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<ImpresarioSerialization::AudioPacket>(buf);
}

inline bool VerifyAudioPacketBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<ImpresarioSerialization::AudioPacket>(nullptr);
}

inline bool VerifySizePrefixedAudioPacketBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<ImpresarioSerialization::AudioPacket>(nullptr);
}

inline void FinishAudioPacketBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::AudioPacket> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAudioPacketBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<ImpresarioSerialization::AudioPacket> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace ImpresarioSerialization

#endif  // FLATBUFFERS_GENERATED_AUDIOPACKET_IMPRESARIOSERIALIZATION_H_
