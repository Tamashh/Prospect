#include "YFPSMatchSummaryEvent.h"

FYFPSMatchSummaryEvent::FYFPSMatchSummaryEvent() {
    this->time_seconds = 0;
    this->time_disregarded_seconds = 0;
    this->fps_average = 0.0f;
    this->fps_frametime_average = 0.0f;
    this->fps_frametime_quantile_25 = 0.0f;
    this->fps_frametime_quantile_50 = 0.0f;
    this->fps_frametime_quantile_75 = 0.0f;
    this->fps_percent_missed_vsyncs_thirty = 0.0f;
    this->fps_percent_missed_vsyncs_sixty = 0.0f;
    this->thread_game_average = 0.0f;
    this->thread_draw_average = 0.0f;
    this->thread_gpu_average = 0.0f;
    this->bound_percent_thread_game = 0.0f;
    this->bound_percent_thread_draw = 0.0f;
    this->bound_percent_thread_gpu = 0.0f;
    this->fps_frametime_max = 0.0f;
    this->fps_frametime_min = 0.0f;
    this->fps_limit = 0;
    this->hitchframecount_game = 0;
    this->hitchframecount_draw = 0;
    this->hitchframecount_gpu = 0;
    this->physical_memory_avg = 0;
    this->physical_memory_max = 0;
    this->virtual_memory_avg = 0;
    this->virtual_memory_max = 0;
    this->gc_time_avg = 0.0f;
    this->gc_time_max = 0.0f;
    this->gc_time_min = 0.0f;
    this->gc_time_percent_over_budget = 0.0f;
    this->display_mode = 0;
    this->vsync = false;
    this->Preset = 0;
    this->auto_detect_preset = false;
    this->resolution_quality = 0;
    this->viewDistance_quality = 0;
    this->antialiasing_quality = 0;
    this->shadow_quality = 0;
    this->postprocess_quality = 0;
    this->texture_quality = 0;
    this->effects_quality = 0;
    this->foliage_quality = 0;
    this->colorblind_type = 0;
    this->colorblind_severity = 0.0f;
    this->colorblind_correct_deficiency = false;
    this->colorblind_correction_with_deficiency = false;
}

