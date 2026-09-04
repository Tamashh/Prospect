#include "YSocialFunctionsLibrary.h"

UYSocialFunctionsLibrary::UYSocialFunctionsLibrary() {
}

FText UYSocialFunctionsLibrary::UserStateToText(EYUserState userState) {
    return FText::GetEmpty();
}

bool UYSocialFunctionsLibrary::TryToggleMuteOtherPlayerInVoiceChat(AActor* actorContext, const FString& UserId, const FString& ctxStr) {
    return false;
}

bool UYSocialFunctionsLibrary::TryToggleMuteOtherPlayerInChat(AActor* actorContext, const FString& UserId, int32 biLocation, const FString& chatMessageText, const FString& ctxStr) {
    return false;
}

FText UYSocialFunctionsLibrary::SocialUICategoryToText(EYSocialUICategory socialUICategory) {
    return FText::GetEmpty();
}

int32 UYSocialFunctionsLibrary::SearchForUserName(UObject* objectContext, const FString& Username, bool includePresence) {
    return 0;
}

void UYSocialFunctionsLibrary::RequestFriendRemoveModal(UObject* objectContext, const FString& UserId) {
}

bool UYSocialFunctionsLibrary::IsShowingConfirmationModal(UObject* objectContext) {
    return false;
}

bool UYSocialFunctionsLibrary::IsInviteFromUserPending(UObject* objectContext, const FString& UserId) {
    return false;
}

bool UYSocialFunctionsLibrary::IsFriend(UObject* objectContext, const FString& PlayFabId) {
    return false;
}

int32 UYSocialFunctionsLibrary::GetNumberOfFriends(UObject* objectContext) {
    return 0;
}

int32 UYSocialFunctionsLibrary::GetMaxFriendsLimit(UObject* objectContext) {
    return 0;
}

FText UYSocialFunctionsLibrary::FriendOnlineStatusToText(EYFriendOnlineStatus friendOnlineStatus) {
    return FText::GetEmpty();
}

FText UYSocialFunctionsLibrary::FriendActionResultToText(UObject* objetContext, EYFriendActionResult friendActionResult) {
    return FText::GetEmpty();
}

FText UYSocialFunctionsLibrary::FindSpecificMessageFromNotificationType(UObject* objectContext, const FString& Name, EYNotificationMessageType Type) {
    return FText::GetEmpty();
}

bool UYSocialFunctionsLibrary::FindSocialNotificationData(UObject* objectContext, EYNotificationMessageType Type, FYNotificationItemDataTableRow& outData) {
    return false;
}

UYSocialManager* UYSocialFunctionsLibrary::FindSocialManager(UObject* objectContext) {
    return NULL;
}

bool UYSocialFunctionsLibrary::FindSocialEntry(UObject* objectContext, const FString& UserId, FYOutpostFriendInfo& outData) {
    return false;
}

bool UYSocialFunctionsLibrary::FindSocialEntries(UObject* objectContext, TArray<FYOutpostFriendInfo>& outData) {
    return false;
}

bool UYSocialFunctionsLibrary::FindNotificationTypeFromBackend(EYSocialNotificationBackend Type, EYNotifcationType& outNotificationType, EYNotificationMessageType& outMessageType) {
    return false;
}

UYNotificationsManager* UYSocialFunctionsLibrary::FindNotificationsManager(UObject* objectContext) {
    return NULL;
}

UYNotificationSettings* UYSocialFunctionsLibrary::FindNotificationSettings() {
    return NULL;
}

EYFriendState UYSocialFunctionsLibrary::FindFriendStateFromUID(UObject* objectContext, const FString& UserId, const FString& Context) {
    return EYFriendState::NONE;
}

bool UYSocialFunctionsLibrary::FindAllOutpostFriendOfGivenType(UObject* objectContext, TArray<EYFriendState> State, TArray<FYOutpostFriendInfo>& outFriendInfos) {
    return false;
}

bool UYSocialFunctionsLibrary::FindActiveSocialDataTableRowFromHandle(FDataTableRowHandle Handle, FYSocialItemRowBase& OutItem) {
    return false;
}

bool UYSocialFunctionsLibrary::FindActiveSocialDataTableRowData(AActor* relevantContext, FYSocialItemRowBase& OutItem) {
    return false;
}

bool UYSocialFunctionsLibrary::ExecuteSingleFriendAction(UObject* objectContext, const FString& UserId, EYFriendState newFriendState) {
    return false;
}

bool UYSocialFunctionsLibrary::ExecuteFriendActions(UObject* objectContext, FYSocialActionRequestEntry entry, bool checkMuteState) {
    return false;
}

bool UYSocialFunctionsLibrary::CanRemoveFriend(UObject* objectContext, const FString& UserId, const FString& ctxStr) {
    return false;
}

bool UYSocialFunctionsLibrary::CanAddFriend(UObject* objectContext, const FString& UserId, const FString& ctxStr) {
    return false;
}


