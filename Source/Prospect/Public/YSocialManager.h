#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "YFriendEntry.h"
#include "YPlayFabFriendWithPresence.h"
#include "YPlayerProfile.h"
#include "YSocialPresenceEntry.h"
#include "YUserFriendList.h"
#include "UObject/Object.h"
#include "YAzureFunctionResult.h"
#include "YPlayfabUserAccountInfo.h"
#include "EYFriendsImportResultCode.h"
#include "OnPlayerProfileUpdatedSignatureDelegate.h"
#include "YFeatureToggles.h"
#include "YOnDeclineFriendResultDelegate.h"
#include "YOnFriendActionDoneDelegate.h"
#include "YOnPendingFriendRequestsResponseDelegate.h"
#include "YOnPlayfabFriendsUpdatedDelegate.h"
#include "YOnRecentPlayersRegisteredDelegate.h"
#include "YOnSocialEntriesUpdatedDelegate.h"
#include "YOnUserSearchResponseDelegate.h"
#include "YOutpostFriendInfo.h"
#include "YPlayerActionHistoryData.h"
#include "YProspectorLevelData.h"
#include "YSocialNotification.h"
#include "YSocialManager.generated.h"

class UYSocialManager;

UCLASS(Blueprintable)
class UYSocialManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYOutpostFriendInfo> m_socialEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYFriendState, FYPlayerActionHistoryData> m_actionHistoryData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnPlayfabFriendsUpdated OnPlayfabFriendsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYPlayFabFriendWithPresence> m_playFabFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayFabFriendWithPresence> m_inboundFriendRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayFabFriendWithPresence> m_outboundFriendRequests;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnPendingFriendRequestsResponse OnPendingFriendRequestsResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSocialEntriesUpdated OnSocialEntriesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnUserSearchResponse OnUserSearchResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnDeclineFriendResult OnDeclineFriendResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRecentPlayersRegistered OnRecentPlayerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFriendActionDone OnFriendActionExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerProfileUpdatedSignature OnProspectorLevelDataCalculated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_recievedInternalFriendListOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_recievedEGSFriendListOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_automaticImportPlatformFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_cachedMaxFriendsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendsImportResultCode m_cachedImportResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYProspectorLevelData m_prospectorLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabUserAccountInfo m_searchedUser;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOutpostFriendInfo m_localUserEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cachedUserIdForModalDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_lazyCacheNonFoundFriends;
    
public:
    UYSocialManager();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowSocialNotification(const FYSocialNotification& notification);
    
    UFUNCTION(BlueprintCallable)
    void OnUserInfoUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSearchUserResponse(const FYPlayfabUserAccountInfo& searchUserInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestFriendRemoveModalConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveFriendResponse(const FYAzureFunctionResult& azureResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPresenceUpdated(const TMap<FString, FYSocialPresenceEntry>& presenceEntries);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformFriendsUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGetPendingFriendRequestsResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendsImportResult(const EYFriendsImportResultCode resultCode, const int32 maxFriendsLimit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFriendListUpdated(const FYUserFriendList& friendList);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendEntry(const FYFriendEntry& friendEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeclineFriendRequestResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAddFriendResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptFriendRequestResponse(const FYAzureFunctionResult& azureResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleFriendsInfo(TArray<FYPlayFabFriendWithPresence> Friends);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYSocialManager* GetInstance(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void DumpSocialToLog();
    
    UFUNCTION(BlueprintCallable)
    void CacheProspectorLevelData(const FYPlayerProfile& PlayerProfile);
    
};

