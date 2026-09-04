#include "YCharacterWeaponGlintComponent.h"

UYCharacterWeaponGlintComponent::UYCharacterWeaponGlintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYCharacterWeaponGlintComponent::ShouldCreateGlint() {
    return false;
}

void UYCharacterWeaponGlintComponent::OnLeaveTargeting(bool interupted) {
}

void UYCharacterWeaponGlintComponent::OnEnterTargeting() {
}

void UYCharacterWeaponGlintComponent::BP_OnLeaveTargeting_Implementation(bool NewShouldCreateGlint) {
}

void UYCharacterWeaponGlintComponent::BP_OnEnterTargeting_Implementation(bool NewShouldCreateGlint) {
}


