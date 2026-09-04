#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "EYChannelType.h"
#include "EYMuteReason.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchState.h"
#include "OnChannelTypeChangedDelegate.h"
#include "OnMutedStateChangedDelegate.h"
#include "YChatHistoryEntry.h"
#include "YOutpostFriendInfo.h"
#include "YControllerChatComponent.generated.h"

class AActor;
class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerChatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutedStateChanged OnMutedStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChannelTypeChanged OnChannelTypeChanged;
    
    UYControllerChatComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadMembersUpdated(const TArray<FYOutpostFriendInfo>& squadMembers);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRefreshActiveChannels();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState State, AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageGotFromBackend(int32 Duration, EYMuteReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginResult(EYLoginResult loginResult);
    
    UFUNCTION(BlueprintCallable)
    void OnLanguageChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnClearMutingTimeout();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool FindLastMessageFromChannel(AActor* actorContext, EYChannelType Type, int32 previousMessageCount, FYChatHistoryEntry& outData);
    
};

