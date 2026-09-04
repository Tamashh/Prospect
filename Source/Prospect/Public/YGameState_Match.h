#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EYMapMarkerState.h"
#include "EYMatchState.h"
#include "MatchStateUpdatedEventDelegate.h"
#include "OnGamePlayerDeathDelegate.h"
#include "OnMapInfoUpdatedDelegate.h"
#include "OnMatchLevelsLoadedSignatureDelegate.h"
#include "OnMatchTimerElapsedDelegate.h"
#include "OnMatchTimerUpdatedDelegate.h"
#include "OnMatchTimerVisibilityDelegate.h"
#include "OnPlayerGameStateChangedDelegate.h"
#include "OnPlayerJoinedDelegate.h"
#include "OnPlayerLeftDelegate.h"
#include "OnPlayerSpawnedAtDelegate.h"
#include "OnPlayerTeleportedDelegate.h"
#include "YGameState_Base.h"
#include "YPlayerStateChangeData.h"
#include "YGameState_Match.generated.h"

class AYPlayerState;
class UWorld;
class UYAIManager;
class UYActivitiesManager;
class UYActivityLocationsManager;
class UYAudioEffectZoneManagerComponent;
class UYFPSSummaryAnalyticsComponent;
class UYFunctionsUsedAnalyticsComponent;
class UYItemActorSpawner;
class UYKeybindingAnalyticsComponent;
class UYLatencyAnalyticsComponent;
class UYMatchChatManagerComponent;
class UYPlayersStatsComponent;
class UYRelevancyLookupManager;

UCLASS(Blueprintable)
class AYGameState_Match : public AYGameState_Base {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStateBeginPlayAvailable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvacuationPhaseStart, EYMapMarkerState, changeMarkersToState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIManager* m_aiManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchLevelsLoadedSignature OnLevelsOfTypeLoadedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerGameStateChanged OnPlayerGameStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTeleported OnPlayerTeleported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSpawnedAt OnPlayerSpawnedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_waitingToStartTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_prematchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_matchLaunchCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_matchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_persistentMatchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_matchFinishingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_aiCharacterCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchTimerElapsed OnMatchTimerElapsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchTimerUpdated OnMatchTimerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchTimerUpdated OnDebugSetNewMatchTime;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchTimerVisibility OnMatchTimerVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapInfoUpdated OnMapInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchStateUpdatedEvent OnMatchStateUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoined OnPlayerJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLeft OnPlayerLeftMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamePlayerDeath OnGamePlayerDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_diedBonusDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_matchPlayedBonusDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_gameModeUIHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYLatencyAnalyticsComponent* m_latencyAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYActivitiesManager* m_activitiesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYAudioEffectZoneManagerComponent* m_audioEffectZoneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYActivityLocationsManager* m_activityLocationsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYFunctionsUsedAnalyticsComponent* m_functionsUsedAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYRelevancyLookupManager* m_relevancyLookupManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    EYMatchState m_matchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimerUpdate, meta=(AllowPrivateAccess=true))
    int32 m_matchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchTimerVisibility, meta=(AllowPrivateAccess=true))
    bool m_matchTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYItemActorSpawner* m_itemActorSpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYFPSSummaryAnalyticsComponent* m_fpsSummaryAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYKeybindingAnalyticsComponent* m_keybindingAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYMatchChatManagerComponent* m_matchChatManagerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MapInfo, meta=(AllowPrivateAccess=true))
    FString m_mapInfoRowId;
    
public:
    AYGameState_Match(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SkipMatchState();
    
    UFUNCTION(BlueprintCallable)
    void SetMatchTimerVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchTimer(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchState(EYMatchState matchState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchTimerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MapInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerGameDataChanged(FYPlayerStateChangeData stateData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeath(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnEvacuationPhaseStarted(EYMapMarkerState changeMarkersToState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAICharacterCountChangedCallback(int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerLeftMatch(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDebugNewTimeSet(int32 newTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetTotalElapsedLobbyTime();
    
    UFUNCTION(BlueprintCallable)
    UYPlayersStatsComponent* GetPlayersStatsComponent();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMatchTime();
    
    UFUNCTION(BlueprintCallable)
    EYMatchState GetMatchState();
    
    UFUNCTION(BlueprintCallable)
    FString GetMapInfoRowId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentMatchTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DebugSetCurrentMatchTime(int32 newTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDebugCheatMessage(const FString& cheatMessage);
    
};

