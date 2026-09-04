#include "YWeaponAnalyticsComponent.h"

UYWeaponAnalyticsComponent::UYWeaponAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYWeaponAnalyticsComponent::SendDropWeaponData(AActor* playerControllerActor, const FYStoredInventoryWeaponData& storedInformation) {
}

void UYWeaponAnalyticsComponent::OnWeaponFired(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent) {
}

void UYWeaponAnalyticsComponent::OnWeaponAcquired(AActor* actorContext, const FYStoredInventoryWeaponData& storedData) {
}

void UYWeaponAnalyticsComponent::OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn) {
}

void UYWeaponAnalyticsComponent::OnDamageDealt(const FYDealtDamageData& damageDealt) {
}

void UYWeaponAnalyticsComponent::OnAmmoChanged(const FYAmmoUpdateInfo& ammoInfo) {
}

void UYWeaponAnalyticsComponent::OnActiveWeaponModsChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent) {
}

void UYWeaponAnalyticsComponent::OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle newRow) {
}


