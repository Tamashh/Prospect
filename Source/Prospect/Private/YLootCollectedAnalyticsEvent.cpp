#include "YLootCollectedAnalyticsEvent.h"

FYLootCollectedAnalyticsEvent::FYLootCollectedAnalyticsEvent() {
    this->pickup_location_X = 0;
    this->pickup_location_Y = 0;
    this->Source = 0;
    this->item_amount = 0;
    this->time_since_match_start = 0;
    this->time_since_user_joined = 0;
    this->current_bag_weight = 0.0f;
    this->max_bag_weight = 0.0f;
    this->max_safe_weight = 0.0f;
    this->current_safe_weight = 0.0f;
    this->weight = 0.0f;
    this->loot_area = false;
    this->in_loot_container = false;
}

