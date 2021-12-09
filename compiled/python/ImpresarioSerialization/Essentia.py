# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Essentia(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Essentia()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsEssentia(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # Essentia
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Essentia
    def MelSignal(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Essentia
    def MelSignalAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Essentia
    def MelSignalLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Essentia
    def MelSignalIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        return o == 0

    # Essentia
    def Radixes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Essentia
    def RadixesAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Essentia
    def RadixesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Essentia
    def RadixesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        return o == 0

    # Essentia
    def Lagflux(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Essentia
    def LagfluxAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Essentia
    def LagfluxLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Essentia
    def LagfluxIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        return o == 0

def Start(builder): builder.StartObject(3)
def EssentiaStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddMelSignal(builder, melSignal): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(melSignal), 0)
def EssentiaAddMelSignal(builder, melSignal):
    """This method is deprecated. Please switch to AddMelSignal."""
    return AddMelSignal(builder, melSignal)
def StartMelSignalVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def EssentiaStartMelSignalVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartMelSignalVector(builder, numElems)
def AddRadixes(builder, radixes): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(radixes), 0)
def EssentiaAddRadixes(builder, radixes):
    """This method is deprecated. Please switch to AddRadixes."""
    return AddRadixes(builder, radixes)
def StartRadixesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def EssentiaStartRadixesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartRadixesVector(builder, numElems)
def AddLagflux(builder, lagflux): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(lagflux), 0)
def EssentiaAddLagflux(builder, lagflux):
    """This method is deprecated. Please switch to AddLagflux."""
    return AddLagflux(builder, lagflux)
def StartLagfluxVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def EssentiaStartLagfluxVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartLagfluxVector(builder, numElems)
def End(builder): return builder.EndObject()
def EssentiaEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)