#include "YLocalPlayerProximityComponent.h"

UYLocalPlayerProximityComponent::UYLocalPlayerProximityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_distanceMin = 7500.0f;
    this->m_isPlayerClose = false;
}




