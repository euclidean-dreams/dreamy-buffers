# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Luminary(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Luminary()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsLuminary(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # Luminary
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Luminary
    def Glimpse(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Uint8Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 1))
        return 0

    # Luminary
    def GlimpseAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Uint8Flags, o)
        return 0

    # Luminary
    def GlimpseLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Luminary
    def GlimpseIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        return o == 0

def Start(builder): builder.StartObject(1)
def LuminaryStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddGlimpse(builder, glimpse): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(glimpse), 0)
def LuminaryAddGlimpse(builder, glimpse):
    """This method is deprecated. Please switch to AddGlimpse."""
    return AddGlimpse(builder, glimpse)
def StartGlimpseVector(builder, numElems): return builder.StartVector(1, numElems, 1)
def LuminaryStartGlimpseVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartGlimpseVector(builder, numElems)
def End(builder): return builder.EndObject()
def LuminaryEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)