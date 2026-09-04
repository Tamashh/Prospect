#include "YPingableComponent.h"

UYPingableComponent::UYPingableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isEnabled = true;
    this->m_pingableRadius = 250.0f;
    this->m_disregardIfInSameTeam = false;
    this->m_teamRelevantActor = NULL;
}


