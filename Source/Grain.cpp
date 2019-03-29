/*
  ==============================================================================

    Grain.cpp
    Created: 24 Mar 2019 2:40:11pm
    Author:  Rishin Doshi

  ==============================================================================
*/

#include "Grain.h"

void Grain::process(AudioSampleBuffer& currentBlock, AudioSampleBuffer& fileBuffer,
                    int numChannels, int blockNumSamples, int fileNumSamples, long long time) {
    
    for (int channel = 0; channel < numChannels; ++channel) {
        float* channelData = currentBlock.getWritePointer(channel);
        const float* fileData = fileBuffer.getReadPointer(channel%fileBuffer.getNumChannels());
        
        channelData[time%blockNumSamples] += fileData[time%fileNumSamples];
    }
}
