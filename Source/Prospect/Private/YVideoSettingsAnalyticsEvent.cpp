#include "YVideoSettingsAnalyticsEvent.h"

FYVideoSettingsAnalyticsEvent::FYVideoSettingsAnalyticsEvent() {
    this->resolution_quality = 0.0f;
    this->max_fps = 0.0f;
    this->FOV = 0.0f;
    this->gamma = 0.0f;
    this->colorblind_intensity = 0.0f;
    this->interface_scale = 0.0f;
    this->auto_detect = false;
    this->anti_aliasing = 0;
    this->draw_distance = 0;
    this->shadow_quality = 0;
    this->post_process_quality = 0;
    this->texture_quality = 0;
    this->visual_effects_quality = 0;
    this->foliage_quality = 0;
    this->vsync = false;
    this->show_fps = false;
    this->enable_multi_threaded_rendering = false;
    this->enable_gpu_crash_debugging = false;
    this->enable_dx_12 = false;
    this->enable_motion_blur = false;
    this->image_sharpening = 0.0f;
}

