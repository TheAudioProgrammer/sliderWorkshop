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
class SliderWorkshopAudioProcessorEditor  : public AudioProcessorEditor,
                                            public Slider::Listener
{
public:
    SliderWorkshopAudioProcessorEditor (SliderWorkshopAudioProcessor&);
    ~SliderWorkshopAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void sliderValueChanged(Slider* slider) override;

private:
    Slider gainSlider;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SliderWorkshopAudioProcessor& processor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SliderWorkshopAudioProcessorEditor)
};
