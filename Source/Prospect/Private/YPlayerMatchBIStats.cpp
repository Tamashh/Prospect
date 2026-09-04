#include "YPlayerMatchBIStats.h"

FYPlayerMatchBIStats::FYPlayerMatchBIStats() {
    this->shots = 0;
    this->hits = 0;
    this->kills = 0;
    this->damage_done_to_AI = 0;
    this->damage_received_by_AI = 0;
    this->damage_received_by_players = 0;
    this->shield_damage_received_by_AI = 0;
    this->shield_damage_received_by_players = 0;
    this->damage_done_to_players = 0;
    this->damage_received_by_storm = 0;
    this->fall_damage = 0;
    this->AI_kills = 0;
    this->match_time_death = 0;
    this->match_time_escape = 0;
    this->time_since_user_joined = 0;
    this->match_left = false;
    this->spawn_location_x = 0;
    this->spawn_location_y = 0;
    this->current_bag_weight = 0.0f;
    this->max_bag_weight = 0.0f;
    this->max_safe_weight = 0.0f;
    this->current_safe_weight = 0.0f;
}

