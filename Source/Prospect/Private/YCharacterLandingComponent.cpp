#include "YCharacterLandingComponent.h"

UYCharacterLandingComponent::UYCharacterLandingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_moveSpeedModifier = 1.0f;
    this->m_currentActviveMoveAndLookSpeedCurve = NULL;
    this->m_timestampCurveSet = -9999.0f;
}

void UYCharacterLandingComponent::OnEvaluateLanding(const FYFallingDamageInfo& Info) {
}

void UYCharacterLandingComponent::OnCancelledHardLanding(bool interrupt) {
}

void UYCharacterLandingComponent::FinishHardLanding() {
}


