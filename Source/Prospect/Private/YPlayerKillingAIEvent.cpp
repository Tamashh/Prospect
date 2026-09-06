#include "YPlayerKillingAIEvent.h"

FYPlayerKillingAIEvent::FYPlayerKillingAIEvent() {
    this->location_x_killer = 0;
    this->location_y_killer = 0;
    this->location_z_killer = 0;
    this->time_since_user_joined = 0;
    this->time_started_to_get_killed_by_player = 0;
    this->AI_activity = 0;
    this->ai_damage_dealt = 0;
    this->health_on_started_to_get_killed_by_player = 0;
    this->hits_ai = 0;
    this->weakspot_hits_ai = 0;
    this->squadAI_id = 0;
}

