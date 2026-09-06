#include "YFootstepComponent.h"

UYFootstepComponent::UYFootstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_optionalPlayerCharacterStateComponent = NULL;
    this->m_traceStartOffsetZ = 35.0f;
    this->m_traceStartOffsetZCrouching = 100.0f;
    this->m_traceDistance = 75.0f;
    this->m_traceDistanceLanded = 200.0f;
    this->m_traceDistanceSlide = 200.0f;
    this->m_speedMaxAudioParameter = 500.0f;
    this->m_fallingDistanceMaxAudioParameter = 450.0f;
    this->m_isTracingAsync = true;
    this->m_isTracingComplex = false;
    this->m_playFootstepVFXFromAnimNotifier = true;
    this->m_playSimplifiedFootsteps = false;
    this->m_traceCooldownPhysMaterial = 1.0f;
    this->m_cameraShakePerFootstepCrouch = NULL;
    this->m_cameraShakePerFootstepWalk = NULL;
    this->m_cameraShakePerFootstepSprint = NULL;
    this->m_physMaterialBeneathActor = NULL;
}

void UYFootstepComponent::PlaySlideFX(TEnumAsByte<EYSlideAnimationState> slideAnimState, TEnumAsByte<EYFeet> Feet) {
}

void UYFootstepComponent::PlayFootstepFXFromAnimNotifier(UMeshComponent* MeshComponent, TEnumAsByte<EYFeet> Feet) {
}

void UYFootstepComponent::PlayFootstepFX(TEnumAsByte<EYFeet> Feet) {
}

void UYFootstepComponent::OnLanding(const FYLandingEventInfo& landingInfo) {
}


