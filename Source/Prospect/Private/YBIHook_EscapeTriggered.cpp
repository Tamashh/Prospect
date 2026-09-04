#include "YBIHook_EscapeTriggered.h"

FYBIHook_EscapeTriggered::FYBIHook_EscapeTriggered() {
    this->time_since_match_start = 0;
    this->time_since_user_joined = 0;
    this->position_x = 0;
    this->position_y = 0;
    this->position_z = 0;
    this->player_position_x = 0;
    this->player_position_y = 0;
    this->player_position_z = 0;
    this->Status = 0;
    this->cooldown_duration = 0;
}

