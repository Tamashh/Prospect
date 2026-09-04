#include "YControllerTrackerKillsComponent.h"

UYControllerTrackerKillsComponent::UYControllerTrackerKillsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYControllerTrackerKillsComponent* UYControllerTrackerKillsComponent::FindControllerTrackingKillsComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerTrackerKillsComponent* UYControllerTrackerKillsComponent::FindControllerTrackingKillsComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerTrackerKillsComponent::CheckIfKillRegistered(const FYDealtDamageData& damageDealt) {
}


