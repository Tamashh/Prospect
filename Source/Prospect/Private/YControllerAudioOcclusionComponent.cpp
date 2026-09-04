#include "YControllerAudioOcclusionComponent.h"

UYControllerAudioOcclusionComponent::UYControllerAudioOcclusionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentLocalPawn = NULL;
}

void UYControllerAudioOcclusionComponent::OnAudioComponentStartPlay(UAudioComponent* AudioComponent) {
}


