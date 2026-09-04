#include "YProjectileMovementComponent.h"

UYProjectileMovementComponent::UYProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_acceleration = 0.0f;
    this->m_accelerationDelay = 0.0f;
    this->m_accelerationAdditionalMaxSpeed = 0.0f;
    this->m_cachedGameplayAttributeComponent = NULL;
    this->m_gameplayContextType = EYGameplayContextType::All;
}


