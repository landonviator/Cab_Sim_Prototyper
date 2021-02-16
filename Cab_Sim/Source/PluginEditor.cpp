/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Cab_SimAudioProcessorEditor::Cab_SimAudioProcessorEditor (Cab_SimAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

Cab_SimAudioProcessorEditor::~Cab_SimAudioProcessorEditor()
{
}

//==============================================================================
void Cab_SimAudioProcessorEditor::paint (juce::Graphics& g)
{
    juce::Rectangle<int> background = AudioProcessorEditor::getLocalBounds();
    g.setGradientFill(juce::ColourGradient::vertical(juce::Colour::fromFloatRGBA(0.18f, 0.20f, 0.24f, 1.0), 300 * .01, juce::Colour::fromFloatRGBA(0.12f, 0.14f, 0.18f, 1.0), 300 * .99));
    g.fillRect(background);
    g.setColour (juce::Colours::white.darker(1.0));
    g.setFont (36.0f);
    g.drawFittedText ("Cabinet Simulator", getLocalBounds(), juce::Justification::centred, 1);
}

void Cab_SimAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
