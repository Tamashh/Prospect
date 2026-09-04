#include "YAIAnimationComponent.h"

UYAIAnimationComponent::UYAIAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_actorToRotateTowards = NULL;
    this->m_animInstance = NULL;
}

void UYAIAnimationComponent::StopAnimationMontage(FYAIMontageStopInfo Info) {
}

bool UYAIAnimationComponent::PlayAnimationMontage(FYAIMontagePlayInfo montageInfo) {
    return false;
}

void UYAIAnimationComponent::MulticastStopAnimationMontage_Implementation(FYAIMontageStopInfo Info) {
}

void UYAIAnimationComponent::MulticastPlayAnimationMontage_Implementation(FYAIMontagePlayInfo Info) {
}


