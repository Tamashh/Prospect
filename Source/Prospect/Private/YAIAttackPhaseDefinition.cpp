#include "YAIAttackPhaseDefinition.h"

FYAIAttackPhaseDefinition::FYAIAttackPhaseDefinition() {
    this->m_durationFixed = 0.0f;
    this->m_durationNeedsToBeCalculatedAtRuntime = false;
    this->m_numTimesToPlayThisPhase = 0;
    this->m_numShots = 0;
    this->m_firingDelayAfterPhaseStart = 0.0f;
    this->m_refireTime = 0.0f;
    this->m_isAffectedByGPAModifierAIAmountAttackPhaseCount = false;
}

