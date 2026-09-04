#include "YControllerWeaponInspectionComponent.h"

UYControllerWeaponInspectionComponent::UYControllerWeaponInspectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerWeaponInspectionComponent::SetInspectedInventoryItem_Implementation(const FYInventoryItem& inventoryItem, int32 inventoryId) {
}

void UYControllerWeaponInspectionComponent::OnPlayerStashItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item) {
}

void UYControllerWeaponInspectionComponent::OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYControllerWeaponInspectionComponent::OnPlayerSetItemRemoved(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYControllerWeaponInspectionComponent::OnDeactivatedInventoryStateCallback(bool bWasInterrupted) {
}

bool UYControllerWeaponInspectionComponent::GetInspectedInventoryItem(FYInventoryItem& outInventoryItem) const {
    return false;
}

int32 UYControllerWeaponInspectionComponent::GetInspectedInventoryId() const {
    return 0;
}

UYControllerWeaponInspectionComponent* UYControllerWeaponInspectionComponent::FindWeaponInspectionComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerWeaponInspectionComponent::ClearInspectedInventoryItem() {
}

bool UYControllerWeaponInspectionComponent::AllowedToInspectWeapon() const {
    return false;
}


