# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Pitch(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsPitch(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Pitch()
        x.Init(buf, n + offset)
        return x

    # Pitch
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Pitch
    def Method(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # Pitch
    def Pitch(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Pitch
    def Confidence(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Pitch
    def SampleTimestamp(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Uint64Flags, o + self._tab.Pos)
        return 0

def PitchStart(builder): builder.StartObject(4)
def PitchAddMethod(builder, method): builder.PrependInt8Slot(0, method, 0)
def PitchAddPitch(builder, pitch): builder.PrependFloat32Slot(1, pitch, 0.0)
def PitchAddConfidence(builder, confidence): builder.PrependFloat32Slot(2, confidence, 0.0)
def PitchAddSampleTimestamp(builder, sampleTimestamp): builder.PrependUint64Slot(3, sampleTimestamp, 0)
def PitchEnd(builder): return builder.EndObject()
