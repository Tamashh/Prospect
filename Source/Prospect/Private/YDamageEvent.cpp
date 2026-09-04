#include "YDamageEvent.h"

FYDamageEvent::FYDamageEvent() {
    this->m_hitsCritical = 0;
    this->m_hitsTotal = 0;
    this->m_amountDamage = 0.0f;
    this->m_timestamp = 0.0f;
    this->m_distance = 0.0f;
    this->m_damageCauser = NULL;
    this->m_damagedActor = NULL;
}

