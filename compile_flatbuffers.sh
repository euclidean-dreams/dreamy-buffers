#!/bin/bash

flatc --cpp --python --scoped-enums -o generated/ \
  src/audioProcessing/AudioPacket.fbs \
  src/audioProcessing/onset/Onset.fbs \
  src/audioProcessing/onset/OnsetAggregate.fbs \
  src/audioProcessing/onset/OnsetMethod.fbs \
  src/audioProcessing/onset/OnsetProcessorParameters.fbs
