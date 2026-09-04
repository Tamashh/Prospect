#include "YAudioSettingsChangedEvent.h"

FYAudioSettingsChangedEvent::FYAudioSettingsChangedEvent() {
    this->master_volume = 0.0f;
    this->music_volume = 0.0f;
    this->sound_effects_volume = 0.0f;
    this->dialogue_volume = 0.0f;
    this->ui_volume = 0.0f;
    this->hitmarker_volume = 0.0f;
    this->input_volume = 0.0f;
    this->output_volume = 0.0f;
    this->push_to_talk = false;
}

