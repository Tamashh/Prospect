#include "YWeaponAnalyticsEvent.h"

FYWeaponAnalyticsEvent::FYWeaponAnalyticsEvent() {
    this->pickup_time = 0;
    this->pickup_time_since_user_joined = 0;
    this->shots_fired = 0;
    this->damage_to_player = 0;
    this->damage_to_AI = 0;
    this->hits = 0;
    this->hits_pvp = 0;
    this->weakspot_hits = 0;
    this->weakspot_hits_pvp = 0;
    this->num_players_kill = 0;
    this->num_AI_kill = 0;
    this->out_of_ammo = 0;
    this->ammo_left = 0;
    this->time_equipped = 0;
}

