#pragma once

#include "PluginProcessor.hh"

class AudioPluginAudioProcessorEditor final : public juce::AudioProcessorEditor {
	public:
		explicit AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor&);
		~AudioPluginAudioProcessorEditor() override;
		void paint (juce::Graphics&) override;
		void resized() override;

	private:
		AudioPluginAudioProcessor& processorRef;
		juce::Slider gain;

		JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioPluginAudioProcessorEditor)
};
