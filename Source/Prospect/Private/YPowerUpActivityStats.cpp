#include "YPowerUpActivityStats.h"

FYPowerUpActivityStats::FYPowerUpActivityStats() {
    this->power_up_step = 0;
    this->contested = false;
    this->contested_long = false;
    this->dealt_damage = false;
    this->dealt_damage_long = false;
    this->time_since_user_joined = 0;
    this->puzzle_variation = 0;
}

