/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Cab_SimAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Cab_SimAudioProcessorEditor (Cab_SimAudioProcessor&);
    ~Cab_SimAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Cab_SimAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Cab_SimAudioProcessorEditor)
};
