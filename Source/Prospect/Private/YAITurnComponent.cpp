#include "YAITurnComponent.h"

UYAITurnComponent::UYAITurnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_turnYawThreshold = 20.0f;
    this->m_turnAnimatBlockTime = 2.0f;
    this->m_turnEnabled = true;
}


