#include "YPlayerCharacterAnimInstance.h"

UYPlayerCharacterAnimInstance::UYPlayerCharacterAnimInstance() {
    this->m_isActorLocallyControlled = false;
    this->m_isAlternativeCodePathEnabled = false;
    this->m_weaponAnimInstance = NULL;
    this->m_characterAnimationAnimInstance = NULL;
    this->m_relativeTargetingTransition = 0.0f;
    this->m_inverseRelativeTargetingTransition = 0.0f;
    this->m_adjustedTargeting = false;
    this->m_isTurning = false;
    this->m_isTurningLeft = false;
    this->m_animCalculationComponent = NULL;
}

void UYPlayerCharacterAnimInstance::SetInterpDeltaYaw(float NewValue) {
}

void UYPlayerCharacterAnimInstance::SetInterpDeltaPitch(float NewValue) {
}

void UYPlayerCharacterAnimInstance::SetDoRotationReset(bool newState) {
}

bool UYPlayerCharacterAnimInstance::IsUsingAlternativeAnimationCodePath() {
    return false;
}


void UYPlayerCharacterAnimInstance::BP_SetIsTurning(bool isTurning, bool isTurningLeft) {
}




