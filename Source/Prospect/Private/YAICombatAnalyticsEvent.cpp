#include "YAICombatAnalyticsEvent.h"

FYAICombatAnalyticsEvent::FYAICombatAnalyticsEvent() {
    this->time_started_when_ai_attacks = 0;
    this->ai_damage_dealt = 0;
    this->Status = 0;
    this->shot_by_ai = 0;
    this->hits_by_ai = 0;
    this->weakspots_hits_by_ai = 0;
    this->location_x_player = 0;
    this->location_y_player = 0;
    this->location_z_player = 0;
}

