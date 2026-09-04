#include "YFPSMatchSummaryServerEvent.h"

FYFPSMatchSummaryServerEvent::FYFPSMatchSummaryServerEvent() {
    this->time_seconds = 0;
    this->frametime_average = 0.0f;
    this->frametime_quantile_25 = 0.0f;
    this->frametime_quantile_50 = 0.0f;
    this->frametime_quantile_75 = 0.0f;
    this->frametime_max = 0.0f;
    this->frametime_min = 0.0f;
    this->fps_limit = 0;
    this->physical_memory_max = 0;
    this->virtual_memory_max = 0;
    this->players_max = 0;
    this->players_avg = 0;
    this->ai_max = 0;
    this->ai_avg = 0;
    this->gc_time_avg = 0.0f;
    this->gc_time_max = 0.0f;
    this->gc_time_min = 0.0f;
    this->gc_time_percent_over_budget = 0.0f;
    this->hitchframecount_game = 0;
}

