/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class GranularSynthAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    GranularSynthAudioProcessorEditor (GranularSynthAudioProcessor&);
    ~GranularSynthAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void loadAudioFile(const String& filePath);

private:
    GranularSynthAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GranularSynthAudioProcessorEditor)
};
