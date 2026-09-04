#include "YMeleeAttackBI.h"

FYMeleeAttackBI::FYMeleeAttackBI() {
    this->attack_type = 0;
    this->Hit = false;
    this->backstab = false;
    this->out_of_stamina = false;
    this->damage_done = 0;
    this->time_since_user_joined = 0;
}

