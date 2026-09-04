#pragma once
#include "CoreMinimal.h"
#include "YFriendAction.h"
#include "YPlayerReward.h"
#include "Components/ActorComponent.h"
#include "EYCachedSpawnLocationType.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YClientMapLoadingStats.h"
#include "YDealtDamageData.h"
#include "YLeaveGameEvent.h"
#include "YPlayerSpawnLocationInfo.h"
#include "YPlayerBIDataComponent.generated.h"

class APawn;
class AYVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerBIDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_haveUsedVehicleOnce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeStampLastTimeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_localCacheMountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_currentGameSituation;
    
public:
    UYPlayerBIDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrySendBIHook_MinimapOpen();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendClientMapLoadingStats(const TArray<FYClientMapLoadingStats>& clientMapLoadingStats);
    
    UFUNCTION(BlueprintCallable)
    void OnVehiclePossesionChanged(AYVehicle* changeVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnStartedEscapeTriggering(const FString& escapeShipId) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnLocationSet(FYPlayerSpawnLocationInfo Data, EYCachedSpawnLocationType Type, const FString& contextStr);
    
    UFUNCTION(BlueprintCallable)
    void OnProspectorLevelXpIncreased(const TArray<FYPlayerReward>& playerRewards);
    
    UFUNCTION(BlueprintCallable)
    void OnProspectorLevelIncreased(int32 newProspectorLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnAssigned(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnNewLoadTimesData();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchResultChanged(EYPlayerMatchFinishedResult matchFinishedResult);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveGame(FYLeaveGameEvent leaveGameEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHandleSystemError();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFriendListAction(const TArray<FYFriendAction>& friendAction);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterEmote();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterBanner();
    
    UFUNCTION(BlueprintCallable)
    void OnClientMovementCorrectionCallback();
    
};

