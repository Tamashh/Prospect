#include "YAITargetInfo.h"

FYAITargetInfo::FYAITargetInfo() {
    this->m_isVisible = false;
    this->m_isCurrentCombatAggroTarget = false;
    this->m_timestampTargetAcquiredAsCombatTarget = 0.0f;
    this->m_isPlayer = false;
    this->m_currentDistance = 0.0f;
    this->m_damagedReceivedFromTarget = 0.0f;
    this->m_minTimeToAggro = 0.0f;
    this->m_baseAggroValue = 0.0f;
    this->m_weightedAggroValue = 0.0f;
    this->m_groupAggroMultiplier = 0.0f;
    this->m_groupAggroIndex = 0;
    this->m_highestSenseType = EYAISenseType::None;
    this->m_lastPerceivedSenseType = EYAISenseType::None;
}

