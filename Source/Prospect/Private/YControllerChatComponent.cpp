#include "YControllerChatComponent.h"

UYControllerChatComponent::UYControllerChatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerChatComponent::OnSquadMembersUpdated(const TArray<FYOutpostFriendInfo>& squadMembers) {
}

void UYControllerChatComponent::OnRefreshActiveChannels() {
}

void UYControllerChatComponent::OnPlayerStateSet() {
}

void UYControllerChatComponent::OnPlayerMatchStateChanged(EYPlayerMatchState State, AYPlayerState* PlayerState) {
}

void UYControllerChatComponent::OnMessageGotFromBackend(int32 Duration, EYMuteReason Reason) {
}

void UYControllerChatComponent::OnLoginResult(EYLoginResult loginResult) {
}

void UYControllerChatComponent::OnLanguageChanged() {
}

void UYControllerChatComponent::OnClearMutingTimeout() {
}

bool UYControllerChatComponent::FindLastMessageFromChannel(AActor* actorContext, EYChannelType Type, int32 previousMessageCount, FYChatHistoryEntry& outData) {
    return false;
}


