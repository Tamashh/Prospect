#include "YBIHook_GetPvpDamage.h"

FYBIHook_GetPvpDamage::FYBIHook_GetPvpDamage() {
    this->location_x = 0;
    this->location_y = 0;
    this->location_z = 0;
    this->location_x_attacker = 0;
    this->location_y_attacker = 0;
    this->location_z_attacker = 0;
    this->time_since_match_start = 0;
    this->time_since_user_joined = 0;
    this->health_when_attacked = 0;
    this->attacker_damage = 0;
}

