#pragma once
#include "CoreMinimal.h"
#include "EYMatchState.h"
#include "OnPlayerSpawnBackgroundDropPodDelegate.h"
#include "YGameModeBase.h"
#include "YGameMode_Match.generated.h"

class APlayerController;
class UYAIAnalyticsComponent;
class UYAbilityAnalyticsComponent;
class UYCommWheelAnalyticsComponent;
class UYDurabilityAnalyticsComponent;
class UYGamePlayerStartComponent;
class UYGameSquadsComponent;
class UYHideableBushManagerComponent;
class UYKilledEventAnalyticsComponent;
class UYMatchDifficultyComponent;
class UYMissionGameManagerComponent;
class UYPersistentActorSpawnerComponent;
class UYPlayerKillsTrackingComponent;
class UYPlayerStatsDeathsComponent;
class UYServerResourceManagerComponent;
class UYWeaponAnalyticsComponent;

UCLASS(Blueprintable, NonTransient)
class AYGameMode_Match : public AYGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMatchDifficultyComponent* m_matchDifficultyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponAnalyticsComponent* m_weaponAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYKilledEventAnalyticsComponent* m_killedEventsAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerStatsDeathsComponent* m_playerStatsDeathsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIAnalyticsComponent* m_aiAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAbilityAnalyticsComponent* m_abilityAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCommWheelAnalyticsComponent* m_commWheelAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDurabilityAnalyticsComponent* m_durabilityAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerKillsTrackingComponent* m_playerKillsTrackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYServerResourceManagerComponent* m_serverResourceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMissionGameManagerComponent* m_missionManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPersistentActorSpawnerComponent* m_persistentActorSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHideableBushManagerComponent* m_hideableBushManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameSquadsComponent* m_gameSquadsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGamePlayerStartComponent* m_gamePlayerStartComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldStartAutomation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldStartPlaytestAutomation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_safetyShutdownTimerPostMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_disconnectPlayerStatesDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_regularShutdownTimerPostMatchAllPlayersFinishedMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_blockBlockablesAroundUsedPlayerStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_blockBlockablesAroundPlayerStartDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSpawnBackgroundDropPod BP_OnPlayerSpawnBackgroundDropPod;
    
public:
    AYGameMode_Match(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSpawnBackgroundDropPod(APlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchTimerElapsed(EYMatchState elapsedMatchState);
    
};

