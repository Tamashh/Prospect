#include "YWeaponScopeComponent.h"

UYWeaponScopeComponent::UYWeaponScopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYWeaponScopeComponent::OnLeaveTargeting_BP_Implementation(bool interrupted) {
}

void UYWeaponScopeComponent::OnEnterTargeting_BP_Implementation() {
}

bool UYWeaponScopeComponent::HasThermalVisionMod() {
    return false;
}


