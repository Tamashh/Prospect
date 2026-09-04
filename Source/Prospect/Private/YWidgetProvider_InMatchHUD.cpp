#include "YWidgetProvider_InMatchHUD.h"

UYWidgetProvider_InMatchHUD::UYWidgetProvider_InMatchHUD() {
}

void UYWidgetProvider_InMatchHUD::OnWeaponsChanged() {
}

void UYWidgetProvider_InMatchHUD::OnStateInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYWidgetProvider_InMatchHUD::OnStaminaChanged(UYResourceComponent* resourceComponent) {
}

void UYWidgetProvider_InMatchHUD::OnShieldChanged(UYResourceComponent* resourceComponent) {
}

void UYWidgetProvider_InMatchHUD::OnReplicatedGPAModifierChanged() {
}

void UYWidgetProvider_InMatchHUD::OnPlayerStateSet() {
}

void UYWidgetProvider_InMatchHUD::OnPlayerCollectedLoot(AController* Instigator, AYPickupActor* pickUpActor) {
}

void UYWidgetProvider_InMatchHUD::OnInventoryChanged() {
}

void UYWidgetProvider_InMatchHUD::OnHealthChanged(UYResourceComponent* resourceComponent) {
}

void UYWidgetProvider_InMatchHUD::OnGPAModifierChanged(EYGameplayAttribute Attribute, bool added, const FGuid& Guid) {
}

void UYWidgetProvider_InMatchHUD::OnAmmoChanged(const FYAmmoUpdateInfo& ammoUpdateInfo) {
}

void UYWidgetProvider_InMatchHUD::OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle) {
}

void UYWidgetProvider_InMatchHUD::OnAbilityStateChanged(const FYAbilityStateInfo& Info) {
}

void UYWidgetProvider_InMatchHUD::OnAbilitiesChanged() {
}

bool UYWidgetProvider_InMatchHUD::HasItemEquipped(EYPlayerSetType Slot) const {
    return false;
}

bool UYWidgetProvider_InMatchHUD::GetWeaponData(int32 Index, FYStoredInventoryWeaponData& weapon) const {
    return false;
}

bool UYWidgetProvider_InMatchHUD::GetToolData(int32 Index, FYStoredInventoryWeaponData& tool) const {
    return false;
}

float UYWidgetProvider_InMatchHUD::GetProgressBarData(const FName& DataName) const {
    return 0.0f;
}

int32 UYWidgetProvider_InMatchHUD::GetActiveWeaponIndex() const {
    return 0;
}

bool UYWidgetProvider_InMatchHUD::GetAbilityData(int32 Index, FYAbilityUIData& abilityData) const {
    return false;
}


