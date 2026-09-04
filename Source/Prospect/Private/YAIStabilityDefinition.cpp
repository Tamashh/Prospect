#include "YAIStabilityDefinition.h"

FYAIStabilityDefinition::FYAIStabilityDefinition() {
    this->m_cooldown = 0.0f;
    this->m_stabilityThreshold = 0.0f;
    this->m_stabilityMultiplierAfterTrigger = NULL;
    this->m_stabilityDecreasePerSecond = 0.0f;
    this->m_isFlinchAnimation = false;
}

