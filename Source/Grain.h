/*
  ==============================================================================

    Grain.h
    Created: 24 Mar 2019 2:40:11pm
    Author:  Rishin Doshi

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class Grain {
public:
    
    Grain() {}
    ~Grain() {}
    
    void process(AudioSampleBuffer& currentBlock, AudioSampleBuffer& fileBuffer,
                 int numChannels, int numBlockSamples, int numFileSamples, long long time);
};
