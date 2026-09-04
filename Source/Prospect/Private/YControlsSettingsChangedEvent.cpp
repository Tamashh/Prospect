#include "YControlsSettingsChangedEvent.h"

FYControlsSettingsChangedEvent::FYControlsSettingsChangedEvent() {
    this->sensitivity = 0.0f;
    this->ads_sensitivity = 0.0f;
    this->invert_x_axis = false;
    this->invert_y_axis = false;
    this->mouse_smoothing = false;
    this->fov_based_sensitivity_scaling = false;
    this->sprint_toggle = false;
    this->crouch_toggle = false;
    this->targeting_toggle = false;
    this->leaning_toggle = false;
}

