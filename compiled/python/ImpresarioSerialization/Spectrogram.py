# automatically generated by the FlatBuffers compiler, do not modify

# namespace: ImpresarioSerialization

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class Spectrogram(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Spectrogram()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsSpectrogram(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # Spectrogram
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Spectrogram
    def OriginTimestamp(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Uint64Flags, o + self._tab.Pos)
        return 0

    # Spectrogram
    def Magnitudes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Spectrogram
    def MagnitudesAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Spectrogram
    def MagnitudesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Spectrogram
    def MagnitudesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        return o == 0

    # Spectrogram
    def SpectralFluxes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Spectrogram
    def SpectralFluxesAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Spectrogram
    def SpectralFluxesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Spectrogram
    def SpectralFluxesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        return o == 0

    # Spectrogram
    def FluxyFluxes(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Spectrogram
    def FluxyFluxesAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Spectrogram
    def FluxyFluxesLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Spectrogram
    def FluxyFluxesIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        return o == 0

    # Spectrogram
    def Peaks(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Spectrogram
    def PeaksAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Spectrogram
    def PeaksLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Spectrogram
    def PeaksIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        return o == 0

    # Spectrogram
    def Fired(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(14))
        if o != 0:
            a = self._tab.Vector(o)
            return self._tab.Get(flatbuffers.number_types.Float32Flags, a + flatbuffers.number_types.UOffsetTFlags.py_type(j * 4))
        return 0

    # Spectrogram
    def FiredAsNumpy(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(14))
        if o != 0:
            return self._tab.GetVectorAsNumpy(flatbuffers.number_types.Float32Flags, o)
        return 0

    # Spectrogram
    def FiredLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(14))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Spectrogram
    def FiredIsNone(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(14))
        return o == 0

def Start(builder): builder.StartObject(6)
def SpectrogramStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddOriginTimestamp(builder, originTimestamp): builder.PrependUint64Slot(0, originTimestamp, 0)
def SpectrogramAddOriginTimestamp(builder, originTimestamp):
    """This method is deprecated. Please switch to AddOriginTimestamp."""
    return AddOriginTimestamp(builder, originTimestamp)
def AddMagnitudes(builder, magnitudes): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(magnitudes), 0)
def SpectrogramAddMagnitudes(builder, magnitudes):
    """This method is deprecated. Please switch to AddMagnitudes."""
    return AddMagnitudes(builder, magnitudes)
def StartMagnitudesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SpectrogramStartMagnitudesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartMagnitudesVector(builder, numElems)
def AddSpectralFluxes(builder, spectralFluxes): builder.PrependUOffsetTRelativeSlot(2, flatbuffers.number_types.UOffsetTFlags.py_type(spectralFluxes), 0)
def SpectrogramAddSpectralFluxes(builder, spectralFluxes):
    """This method is deprecated. Please switch to AddSpectralFluxes."""
    return AddSpectralFluxes(builder, spectralFluxes)
def StartSpectralFluxesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SpectrogramStartSpectralFluxesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartSpectralFluxesVector(builder, numElems)
def AddFluxyFluxes(builder, fluxyFluxes): builder.PrependUOffsetTRelativeSlot(3, flatbuffers.number_types.UOffsetTFlags.py_type(fluxyFluxes), 0)
def SpectrogramAddFluxyFluxes(builder, fluxyFluxes):
    """This method is deprecated. Please switch to AddFluxyFluxes."""
    return AddFluxyFluxes(builder, fluxyFluxes)
def StartFluxyFluxesVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SpectrogramStartFluxyFluxesVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartFluxyFluxesVector(builder, numElems)
def AddPeaks(builder, peaks): builder.PrependUOffsetTRelativeSlot(4, flatbuffers.number_types.UOffsetTFlags.py_type(peaks), 0)
def SpectrogramAddPeaks(builder, peaks):
    """This method is deprecated. Please switch to AddPeaks."""
    return AddPeaks(builder, peaks)
def StartPeaksVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SpectrogramStartPeaksVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartPeaksVector(builder, numElems)
def AddFired(builder, fired): builder.PrependUOffsetTRelativeSlot(5, flatbuffers.number_types.UOffsetTFlags.py_type(fired), 0)
def SpectrogramAddFired(builder, fired):
    """This method is deprecated. Please switch to AddFired."""
    return AddFired(builder, fired)
def StartFiredVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def SpectrogramStartFiredVector(builder, numElems):
    """This method is deprecated. Please switch to Start."""
    return StartFiredVector(builder, numElems)
def End(builder): return builder.EndObject()
def SpectrogramEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)