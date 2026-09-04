#include "YSocialManager.h"

UYSocialManager::UYSocialManager() {
    this->m_recievedInternalFriendListOnce = false;
    this->m_recievedEGSFriendListOnce = false;
    this->m_automaticImportPlatformFriends = false;
    this->m_cachedMaxFriendsLimit = -1;
    this->m_cachedImportResult = EYFriendsImportResultCode::Success;
}

void UYSocialManager::ShowSocialNotification(const FYSocialNotification& notification) {
}

void UYSocialManager::OnUserInfoUpdated() {
}

void UYSocialManager::OnSearchUserResponse(const FYPlayfabUserAccountInfo& searchUserInfo) {
}

void UYSocialManager::OnRequestFriendRemoveModalConfirmed() {
}

void UYSocialManager::OnRemoveFriendResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSocialManager::OnPresenceUpdated(const TMap<FString, FYSocialPresenceEntry>& presenceEntries) {
}

void UYSocialManager::OnPlatformFriendsUpdated() {
}

void UYSocialManager::OnGetPendingFriendRequestsResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSocialManager::OnFriendsImportResult(const EYFriendsImportResultCode resultCode, const int32 maxFriendsLimit) {
}

void UYSocialManager::OnFriendListUpdated(const FYUserFriendList& friendList) {
}

void UYSocialManager::OnFriendEntry(const FYFriendEntry& friendEntry) {
}

void UYSocialManager::OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles) {
}

void UYSocialManager::OnDeclineFriendRequestResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSocialManager::OnAddFriendResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSocialManager::OnAcceptFriendRequestResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSocialManager::HandleFriendsInfo(TArray<FYPlayFabFriendWithPresence> Friends) {
}

UYSocialManager* UYSocialManager::GetInstance(const UObject* WorldContext) {
    return NULL;
}

void UYSocialManager::DumpSocialToLog() {
}

void UYSocialManager::CacheProspectorLevelData(const FYPlayerProfile& PlayerProfile) {
}


