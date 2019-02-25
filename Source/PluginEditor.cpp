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
    gainSlider.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    gainSlider.setRange(0.0, 1.0);
    gainSlider.setValue(1.0);
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
        std::cout << gainSlider.getValue() << std::endl;
    }
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
