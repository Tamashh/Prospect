#include "YMovementStateData.h"

FYMovementStateData::FYMovementStateData() {
    this->m_currentSpeedReductionPerSecond = 0.0f;
    this->m_cooldown = 0.0f;
    this->m_isActive = false;
    this->m_wantToBeActive = false;
    this->m_haveBeenReset = false;
}

