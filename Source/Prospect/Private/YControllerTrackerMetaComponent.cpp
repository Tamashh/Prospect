#include "YControllerTrackerMetaComponent.h"

UYControllerTrackerMetaComponent::UYControllerTrackerMetaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYControllerTrackerMetaComponent* UYControllerTrackerMetaComponent::FindControllerTrackingMetaComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerTrackerMetaComponent* UYControllerTrackerMetaComponent::FindControllerTrackingMetaComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerTrackerMetaComponent::CheckFactionLevelReached(const FYUpdatedFactionProgression& uiData) {
}

void UYControllerTrackerMetaComponent::CheckContractClaimed(const FYActiveContractsUIData& activeContractsUIData) {
}
