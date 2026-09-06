#include "YPlayerCharacterAnimCalculationComponent.h"

UYPlayerCharacterAnimCalculationComponent::UYPlayerCharacterAnimCalculationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_relativeTargetingTransition = 0.0f;
    this->m_inverseRelativeTargetingTransition = 0.0f;
    this->m_adjustedTargeting = false;
    this->m_weaponAnimInstance = NULL;
    this->m_characterAnimationAnimInstance = NULL;
    this->m_isTurning = false;
    this->m_isTurningLeft = false;
}

void UYPlayerCharacterAnimCalculationComponent::SetInterpDeltaYaw(float NewValue) {
}

void UYPlayerCharacterAnimCalculationComponent::SetInterpDeltaPitch(float NewValue) {
}

void UYPlayerCharacterAnimCalculationComponent::SetDoRotationReset(bool newState) {
}

void UYPlayerCharacterAnimCalculationComponent::OnNewWeaponAdded() {
}

void UYPlayerCharacterAnimCalculationComponent::OnJumpedCallback(int32 jumpCount) {
}

void UYPlayerCharacterAnimCalculationComponent::OnFeatureToggleReceivedCallback(const FYFeatureToggles& featureToggles) {
}


