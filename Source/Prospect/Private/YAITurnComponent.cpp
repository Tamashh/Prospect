#include "YAITurnComponent.h"

UYAITurnComponent::UYAITurnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_turnAnimationEnabled = true;
    this->m_turnYawThreshold = 20.0f;
    this->m_turnAnimBlockTime = 2.0f;
}


