#include "YDurabilityAnalyticsComponent.h"

UYDurabilityAnalyticsComponent::UYDurabilityAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYDurabilityAnalyticsComponent::OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn) {
}

void UYDurabilityAnalyticsComponent::HandleOnArmorDurabilityUpdated(UYArmorComponent* armorComponent, const FYActiveArmorData& armor, int32 previousDurability) {
}

void UYDurabilityAnalyticsComponent::HandleOnArmorAddedOrRemoved(UYArmorComponent* armorComponent) {
}


