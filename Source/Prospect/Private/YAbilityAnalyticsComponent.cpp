#include "YAbilityAnalyticsComponent.h"

UYAbilityAnalyticsComponent::UYAbilityAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYAbilityAnalyticsComponent::SendDropAbilityData(AActor* playerControllerActor, const FDataTableRowHandle& abilityRowHandle) {
}

void UYAbilityAnalyticsComponent::OnAbilityUsed(const AActor* PlayerController, const FYInventoryItem& inventoryItem) {
}

void UYAbilityAnalyticsComponent::OnAbilityEquipped(const AActor* PlayerController, const FYInventoryItem& inventoryItem) {
}


