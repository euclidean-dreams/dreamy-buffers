# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class OnsetProcessorParameters(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsOnsetProcessorParameters(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = OnsetProcessorParameters()
        x.Init(buf, n + offset)
        return x

    # OnsetProcessorParameters
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # OnsetProcessorParameters
    def Method(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # OnsetProcessorParameters
    def Threshold(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # OnsetProcessorParameters
    def MinioiMs(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # OnsetProcessorParameters
    def Silence(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # OnsetProcessorParameters
    def AdaptiveWhitening(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

def OnsetProcessorParametersStart(builder): builder.StartObject(5)
def OnsetProcessorParametersAddMethod(builder, method): builder.PrependInt8Slot(0, method, 0)
def OnsetProcessorParametersAddThreshold(builder, threshold): builder.PrependFloat32Slot(1, threshold, 0.0)
def OnsetProcessorParametersAddMinioiMs(builder, minioiMs): builder.PrependInt32Slot(2, minioiMs, 0)
def OnsetProcessorParametersAddSilence(builder, silence): builder.PrependFloat32Slot(3, silence, 0.0)
def OnsetProcessorParametersAddAdaptiveWhitening(builder, adaptiveWhitening): builder.PrependInt8Slot(4, adaptiveWhitening, 0)
def OnsetProcessorParametersEnd(builder): return builder.EndObject()
