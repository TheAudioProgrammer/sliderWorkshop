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
    gainSlider.setColour(Slider::ColourIds::backgroundColourId, Colours::orange);
    gainSlider.setColour(Slider::ColourIds::thumbColourId, Colours::red);
    gainSlider.setColour(Slider::ColourIds::trackColourId, Colours::green);
    gainSlider.setRange(Decibels::gainToDecibels(0.0),Decibels::gainToDecibels(1.0), 0.1);
    gainSlider.setValue(Decibels::gainToDecibels(0.5));
    gainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 100, 20);
    gainSlider.addListener(this);
    addAndMakeVisible(gainSlider);
    
    setSize (200, 200);
}

SliderWorkshopAudioProcessorEditor::~SliderWorkshopAudioProcessorEditor()
{
}

void SliderWorkshopAudioProcessorEditor::sliderValueChanged(Slider* slider)
{
    if (slider == &gainSlider)
    {
        processor.gainSliderValue = gainSlider.getValue();
    }
}

//==============================================================================
void SliderWorkshopAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colours::black);
    g.setFont(Font("Impact", 25.0, 0));
    g.setColour(Colours::yellow);
    g.drawText("Gain Slider", getWidth() / 2 - 40, 10, 100, 15, Justification::left);
}

void SliderWorkshopAudioProcessorEditor::resized()
{
    gainSlider.setBounds(getWidth() / 2 - 25, getHeight() / 2 - 50, 50, 100);
}
