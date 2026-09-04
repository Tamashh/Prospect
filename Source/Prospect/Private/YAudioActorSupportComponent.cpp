#include "YAudioActorSupportComponent.h"

UYAudioActorSupportComponent::UYAudioActorSupportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_needsInteriorUpdates = true;
}

void UYAudioActorSupportComponent::OnSquadsChanged(const TArray<FYOutpostFriendInfo>& squadMemberInfos) {
}

void UYAudioActorSupportComponent::OnPlayerStateSetOnLocalPlayerController(APlayerState* PlayerState) {
}

void UYAudioActorSupportComponent::OnPlayerStateAssigned(AYPlayerState* PlayerState) {
}


