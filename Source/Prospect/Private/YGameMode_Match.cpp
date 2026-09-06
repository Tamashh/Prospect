#include "YGameMode_Match.h"
#include "YAIAnalyticsComponent.h"
#include "YAbilityAnalyticsComponent.h"
#include "YCommWheelAnalyticsComponent.h"
#include "YDurabilityAnalyticsComponent.h"
#include "YGamePlayerStartComponent.h"
#include "YGameSquadsComponent.h"
#include "YGameState_Match.h"
#include "YHUD_Match.h"
#include "YHideableBushManagerComponent.h"
#include "YKilledEventAnalyticsComponent.h"
#include "YMatchDifficultyComponent.h"
#include "YMissionGameManagerComponent.h"
#include "YPersistentActorSpawnerComponent.h"
#include "YPlayerController_Match.h"
#include "YPlayerKillsTrackingComponent.h"
#include "YPlayerState.h"
#include "YPlayerStatsDeathsComponent.h"
#include "YServerResourceManagerComponent.h"
#include "YSpectatorPawn.h"
#include "YWeaponAnalyticsComponent.h"

AYGameMode_Match::AYGameMode_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AYGameState_Match::StaticClass();
    this->PlayerControllerClass = AYPlayerController_Match::StaticClass();
    this->PlayerStateClass = AYPlayerState::StaticClass();
    this->HUDClass = AYHUD_Match::StaticClass();
    this->SpectatorClass = AYSpectatorPawn::StaticClass();
    this->m_matchDifficultyComponent = CreateDefaultSubobject<UYMatchDifficultyComponent>(TEXT("MatchDifficultyComponent"));
    this->m_weaponAnalytics = CreateDefaultSubobject<UYWeaponAnalyticsComponent>(TEXT("YWeaponAnalyticsComponent"));
    this->m_killedEventsAnalytics = CreateDefaultSubobject<UYKilledEventAnalyticsComponent>(TEXT("YKilledEventAnalyticsComponent"));
    this->m_playerStatsDeathsComponent = CreateDefaultSubobject<UYPlayerStatsDeathsComponent>(TEXT("YPlayerStatsDeathsComponent"));
    this->m_aiAnalyticsComponent = CreateDefaultSubobject<UYAIAnalyticsComponent>(TEXT("YAIAnalyticsComponent"));
    this->m_abilityAnalytics = CreateDefaultSubobject<UYAbilityAnalyticsComponent>(TEXT("YAbilityAnalyticsComponent"));
    this->m_commWheelAnalytics = CreateDefaultSubobject<UYCommWheelAnalyticsComponent>(TEXT("YCommWheelAnalyticsComponent"));
    this->m_durabilityAnalytics = CreateDefaultSubobject<UYDurabilityAnalyticsComponent>(TEXT("YArmorAnalyticsComponent"));
    this->m_playerKillsTrackingComponent = CreateDefaultSubobject<UYPlayerKillsTrackingComponent>(TEXT("KillsTrackingComponent"));
    this->m_serverResourceManager = CreateDefaultSubobject<UYServerResourceManagerComponent>(TEXT("ServerResourceManagerComponent"));
    this->m_missionManagerComponent = CreateDefaultSubobject<UYMissionGameManagerComponent>(TEXT("MissionGameManagerComponent"));
    this->m_persistentActorSpawner = CreateDefaultSubobject<UYPersistentActorSpawnerComponent>(TEXT("YPersistentActorSpawner"));
    this->m_hideableBushManager = CreateDefaultSubobject<UYHideableBushManagerComponent>(TEXT("YHideableBushManagerComponent"));
    this->m_gameSquadsComponent = CreateDefaultSubobject<UYGameSquadsComponent>(TEXT("YGameSquadsComponent"));
    this->m_gamePlayerStartComponent = CreateDefaultSubobject<UYGamePlayerStartComponent>(TEXT("YGamePlayerStartComponent"));
    this->m_useLobby = true;
    this->m_shouldStartAutomation = false;
    this->m_shouldStartPlaytestAutomation = false;
    this->m_safetyShutdownTimerPostMatch = 120.0f;
    this->m_disconnectPlayerStatesDelay = 30.0f;
    this->m_regularShutdownTimerPostMatchAllPlayersFinishedMatch = 5.0f;
    this->m_blockBlockablesAroundUsedPlayerStartTime = -1;
    this->m_blockBlockablesAroundPlayerStartDistance = 5000;
}

void AYGameMode_Match::OnSpawnBackgroundDropPod(APlayerController* PlayerController) {
}

void AYGameMode_Match::OnMatchTimerElapsed(EYMatchState elapsedMatchState) {
}


