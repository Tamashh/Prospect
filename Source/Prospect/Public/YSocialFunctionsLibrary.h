#pragma once
#include "CoreMinimal.h"
#include "EYFriendActionResult.h"
#include "EYFriendState.h"
#include "EYSocialNotificationBackend.h"
#include "EYUserState.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYFriendOnlineStatus.h"
#include "EYNotifcationType.h"
#include "EYNotificationMessageType.h"
#include "EYSocialUICategory.h"
#include "YNotificationItemDataTableRow.h"
#include "YOutpostFriendInfo.h"
#include "YSocialActionRequestEntry.h"
#include "YSocialItemRowBase.h"
#include "YSocialFunctionsLibrary.generated.h"

class AActor;
class UYNotificationSettings;
class UYNotificationsManager;
class UYSocialManager;

UCLASS(Blueprintable)
class PROSPECT_API UYSocialFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYSocialFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static FText UserStateToText(EYUserState userState);
    
    UFUNCTION(BlueprintCallable)
    static bool TryToggleMuteOtherPlayerInVoiceChat(AActor* actorContext, const FString& UserId, const FString& ctxStr);
    
    UFUNCTION(BlueprintCallable)
    static bool TryToggleMuteOtherPlayerInChat(AActor* actorContext, const FString& UserId, int32 biLocation, const FString& chatMessageText, const FString& ctxStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SocialUICategoryToText(EYSocialUICategory socialUICategory);
    
    UFUNCTION(BlueprintCallable)
    static int32 SearchForUserName(UObject* objectContext, const FString& Username, bool includePresence);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFriendRemoveModal(UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShowingConfirmationModal(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInviteFromUserPending(UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriend(UObject* objectContext, const FString& PlayFabId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberOfFriends(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxFriendsLimit(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FText FriendOnlineStatusToText(EYFriendOnlineStatus friendOnlineStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FriendActionResultToText(UObject* objetContext, EYFriendActionResult friendActionResult);
    
    UFUNCTION(BlueprintCallable)
    static FText FindSpecificMessageFromNotificationType(UObject* objectContext, const FString& Name, EYNotificationMessageType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindSocialNotificationData(UObject* objectContext, EYNotificationMessageType Type, FYNotificationItemDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYSocialManager* FindSocialManager(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool FindSocialEntry(UObject* objectContext, const FString& UserId, FYOutpostFriendInfo& outData);
    
    UFUNCTION(BlueprintCallable)
    static bool FindSocialEntries(UObject* objectContext, TArray<FYOutpostFriendInfo>& outData);
    
    UFUNCTION(BlueprintCallable)
    static bool FindNotificationTypeFromBackend(EYSocialNotificationBackend Type, EYNotifcationType& outNotificationType, EYNotificationMessageType& outMessageType);
    
    UFUNCTION(BlueprintCallable)
    static UYNotificationsManager* FindNotificationsManager(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static UYNotificationSettings* FindNotificationSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYFriendState FindFriendStateFromUID(UObject* objectContext, const FString& UserId, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAllOutpostFriendOfGivenType(UObject* objectContext, TArray<EYFriendState> State, TArray<FYOutpostFriendInfo>& outFriendInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindActiveSocialDataTableRowFromHandle(FDataTableRowHandle Handle, FYSocialItemRowBase& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindActiveSocialDataTableRowData(AActor* relevantContext, FYSocialItemRowBase& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteSingleFriendAction(UObject* objectContext, const FString& UserId, EYFriendState newFriendState);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteFriendActions(UObject* objectContext, FYSocialActionRequestEntry entry, bool checkMuteState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanRemoveFriend(UObject* objectContext, const FString& UserId, const FString& ctxStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAddFriend(UObject* objectContext, const FString& UserId, const FString& ctxStr);
    
};

