#include "YTacticalFlashlightComponent.h"

UYTacticalFlashlightComponent::UYTacticalFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYTacticalFlashlightComponent::OnWeaponSwitched() {
}

bool UYTacticalFlashlightComponent::HasFlashlightMod() {
    return false;
}

float UYTacticalFlashlightComponent::GetCameraFOV(UObject* WorldContextObject) {
    return 0.0f;
}

void UYTacticalFlashlightComponent::BP_OnWeaponSwitched_Implementation() {
}


