#include "YControllerTrackerInventoryComponent.h"

UYControllerTrackerInventoryComponent::UYControllerTrackerInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerTrackerInventoryComponent::OnEndOfMatchDataAvailable(const FYEomInventoryData& Data) {
}

void UYControllerTrackerInventoryComponent::HandleInventoryOrStashChange(UYStateInventoryComponent* stateInventoryComponent) {
}

UYControllerTrackerInventoryComponent* UYControllerTrackerInventoryComponent::FindControllerTrackingInventoryComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerTrackerInventoryComponent* UYControllerTrackerInventoryComponent::FindControllerTrackingInventoryComponent(AActor* actorContext) {
    return NULL;
}


