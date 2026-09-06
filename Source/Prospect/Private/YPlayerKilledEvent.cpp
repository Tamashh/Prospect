#include "YPlayerKilledEvent.h"

FYPlayerKilledEvent::FYPlayerKilledEvent() {
    this->location_x = 0;
    this->location_y = 0;
    this->location_z = 0;
    this->location_x_killer = 0;
    this->location_y_killer = 0;
    this->location_z_killer = 0;
    this->enemy_damage = 0;
    this->enemy_damage_last_hit = 0;
    this->time_since_match_start = 0;
    this->time_since_user_joined = 0;
    this->AI_activity = 0;
    this->time_started_to_get_killed_by_player = 0;
    this->health_on_started_to_get_killed_by_player = 0;
    this->last_time_damaged_by_a_player = 0;
    this->stamina_on_started_to_get_killed_by_player = 0;
    this->stamina_on_death = 0;
    this->was_escaping = false;
    this->scanner_used = false;
}

