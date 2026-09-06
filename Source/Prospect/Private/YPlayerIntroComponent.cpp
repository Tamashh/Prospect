#include "YPlayerIntroComponent.h"

UYPlayerIntroComponent::UYPlayerIntroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_serverIntroTimeoutDuration = 60.0f;
}

void UYPlayerIntroComponent::TryStartDropPodIntro() {
}

void UYPlayerIntroComponent::ServerSpawnBackgroundDropPod_Implementation() {
}
bool UYPlayerIntroComponent::ServerSpawnBackgroundDropPod_Validate() {
    return true;
}

void UYPlayerIntroComponent::ServerAcknowledgeIntroFinished_Implementation() {
}
bool UYPlayerIntroComponent::ServerAcknowledgeIntroFinished_Validate() {
    return true;
}

void UYPlayerIntroComponent::OnServerTntroTimeout() {
}

void UYPlayerIntroComponent::OnIntroFinished() {
}

bool UYPlayerIntroComponent::IsUsingDropPodIntro() const {
    return false;
}

bool UYPlayerIntroComponent::IsIntroFinished() const {
    return false;
}


