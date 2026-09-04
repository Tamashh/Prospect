#include "YDamagePlayerTrackingData.h"

FYDamagePlayerTrackingData::FYDamagePlayerTrackingData() {
    this->m_lastTimeTakeDamageFromPlayer = 0.0f;
    this->m_timeStartedGettingKilledByPlayer = 0.0f;
    this->m_healthStartedKilledByPlayer = 0.0f;
    this->m_staminaStartedKilledByPlayer = 0.0f;
}

