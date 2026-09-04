#include "YPlayerIntroComponent.h"

UYPlayerIntroComponent::UYPlayerIntroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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

void UYPlayerIntroComponent::OnIntroFinished() {
}

bool UYPlayerIntroComponent::IsUsingDropPodIntro() const {
    return false;
}

bool UYPlayerIntroComponent::IsIntroFinished() const {
    return false;
}


