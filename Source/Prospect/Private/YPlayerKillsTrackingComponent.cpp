#include "YPlayerKillsTrackingComponent.h"

UYPlayerKillsTrackingComponent::UYPlayerKillsTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gameSquadsComponent = NULL;
}

void UYPlayerKillsTrackingComponent::OnTrySendKilledEvent(const FYKilledEventContext& Context, const FYPlayerKilledEvent& killedEvent) {
}


