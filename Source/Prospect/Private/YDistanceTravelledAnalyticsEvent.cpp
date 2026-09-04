#include "YDistanceTravelledAnalyticsEvent.h"

FYDistanceTravelledAnalyticsEvent::FYDistanceTravelledAnalyticsEvent() {
    this->position_x = 0;
    this->position_y = 0;
    this->time_since_match_start = 0;
    this->time_since_user_joined = 0;
    this->distance_travelled_total = 0;
    this->current_bag_weight = 0.0f;
    this->max_bag_weight = 0.0f;
    this->max_safe_weight = 0.0f;
    this->current_safe_weight = 0.0f;
    this->stamina_below_10_percent = 0.0f;
    this->stamina_usage = 0.0f;
}

