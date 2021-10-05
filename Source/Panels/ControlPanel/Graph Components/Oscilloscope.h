/*
  ==============================================================================

    Oscilloscope.h
    Created: 25 Oct 2020 7:26:35pm
    Author:  羽翼深蓝Wings

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "../../../PluginProcessor.h"
#include "GraphTemplate.h"

//==============================================================================
/*
*/
class Oscilloscope : public GraphTemplate//, private juce::Timer
{
public:
    Oscilloscope(FireAudioProcessor &);
    ~Oscilloscope() override;

    void paint (juce::Graphics&) override;
//    void resized() override;
//    void setScale(float scale);
//    bool getZoomState();
//    void setZoomState(bool zoomState);
//    void mouseDown(const juce::MouseEvent &e) override;
//    void mouseEnter(const juce::MouseEvent &e) override;
//    void mouseExit(const juce::MouseEvent &e) override;
    
private:
    FireAudioProcessor &processor;
    
    juce::Array<float> historyL;
    juce::Array<float> historyR;
    juce::Image historyImage;
   
//    float scale = 1.0f;
//    bool mZoomState = false;
//    bool isMouseOn = false;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Oscilloscope)
};
