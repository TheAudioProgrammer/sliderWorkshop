/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SliderWorkshopAudioProcessorEditor::SliderWorkshopAudioProcessorEditor (SliderWorkshopAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    gainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
    gainSlider.setRange(0.0, 1.0);
    gainSlider.setValue(1.0);
    addAndMakeVisible(gainSlider);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

SliderWorkshopAudioProcessorEditor::~SliderWorkshopAudioProcessorEditor()
{
}

//==============================================================================
void SliderWorkshopAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colours::black);
}

void SliderWorkshopAudioProcessorEditor::resized()
{
    gainSlider.setBounds(getWidth() / 2 - 25, getHeight() / 2 - 50, 50, 100);
}
