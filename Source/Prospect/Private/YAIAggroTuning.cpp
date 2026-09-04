#include "YAIAggroTuning.h"

FYAIAggroTuning::FYAIAggroTuning() {
    this->m_weightDistance = 0.0f;
    this->m_weightToken = 0.0f;
    this->m_weightNotInDBNO = 0.0f;
    this->m_weightTypeBonus = 0.0f;
    this->m_weightDamageReceived = 0.0f;
    this->m_weightVisibility = 0.0f;
    this->m_lastSeenTimeout = 0.0f;
    this->m_lastFarSightSeenTimeout = 0.0f;
    this->m_lastSharedSenseTimeout = 0.0f;
    this->m_lastHeardTimeout = 0.0f;
    this->m_groupAggroMultiplier = 0.0f;
    this->m_groupAggroMinMultiplier = 0.0f;
    this->m_groupAggroStartingIndex = 0;
    this->m_distanceReference = 0.0f;
    this->m_minDistanceToBeInvisibleInsideHideableFoliage = 0.0f;
    this->m_distancePanicThresholdForPlayer = 0.0f;
    this->m_distancePanicPlayerMultiplier = 0.0f;
    this->m_targetTypePlayerBonus = 0.0f;
    this->m_minAggroSwitchCooldown = 0.0f;
    this->m_maxAggroSwitchCooldown = 0.0f;
    this->m_damageReceivedDecayPerSecond = 0.0f;
    this->m_damageReceivedMax = 0.0f;
}

