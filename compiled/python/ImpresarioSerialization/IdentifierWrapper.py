# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class IdentifierWrapper(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsIdentifierWrapper(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = IdentifierWrapper()
        x.Init(buf, n + offset)
        return x

    # IdentifierWrapper
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # IdentifierWrapper
    def Identifier(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

def IdentifierWrapperStart(builder): builder.StartObject(1)
def IdentifierWrapperAddIdentifier(builder, identifier): builder.PrependInt8Slot(0, identifier, 0)
def IdentifierWrapperEnd(builder): return builder.EndObject()