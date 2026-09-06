#include "YGameState_Match.h"
#include "Net/UnrealNetwork.h"
#include "YAICharacterSpawnerComponent.h"
#include "YActivitiesManager.h"
#include "YActivityLocationsManager.h"
#include "YAudioEffectZoneManagerComponent.h"
#include "YFPSSummaryAnalyticsComponent.h"
#include "YFunctionsUsedAnalyticsComponent.h"
#include "YItemActorSpawner.h"
#include "YKeybindingAnalyticsComponent.h"
#include "YLatencyAnalyticsComponent.h"
#include "YRelevancyLookupManager.h"

AYGameState_Match::AYGameState_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_haveMinimapManager = true;
    this->m_waitingToStartTimeout = 300;
    this->m_prematchDuration = 60;
    this->m_matchLaunchCountdown = 10;
    this->m_matchDuration = 1200;
    this->m_persistentMatchDuration = 21600;
    this->m_matchFinishingDuration = 300;
    this->m_gameModeType = EYMatchmakeGameModeType::NONE;
    this->m_aiCharacterSpawnerComponent = CreateDefaultSubobject<UYAICharacterSpawnerComponent>(TEXT("YAICharacterSpawner"));
    this->m_latencyAnalyticsComponent = CreateDefaultSubobject<UYLatencyAnalyticsComponent>(TEXT("YLatencyAnalyticsComponent"));
    this->m_activitiesManager = CreateDefaultSubobject<UYActivitiesManager>(TEXT("YActivitiesManager"));
    this->m_audioEffectZoneManager = CreateDefaultSubobject<UYAudioEffectZoneManagerComponent>(TEXT("YAudioEffectZoneManager"));
    this->m_activityLocationsManager = CreateDefaultSubobject<UYActivityLocationsManager>(TEXT("YActivityLocationsManager"));
    this->m_functionsUsedAnalyticsComponent = CreateDefaultSubobject<UYFunctionsUsedAnalyticsComponent>(TEXT("YFunctionsUsedAnalyticsComponent"));
    this->m_relevancyLookupManager = CreateDefaultSubobject<UYRelevancyLookupManager>(TEXT("YRelevancyLookupManager"));
    this->m_matchState = EYMatchState::EnteringMap;
    this->m_matchTimer = 0;
    this->m_matchTimerVisibility = true;
    this->m_itemActorSpawnerComponent = CreateDefaultSubobject<UYItemActorSpawner>(TEXT("ItemActorSpawner"));
    this->m_fpsSummaryAnalyticsComponent = CreateDefaultSubobject<UYFPSSummaryAnalyticsComponent>(TEXT("YFPSSummaryAnalyticsComponent"));
    this->m_keybindingAnalyticsComponent = CreateDefaultSubobject<UYKeybindingAnalyticsComponent>(TEXT("YKeybindingAnalyticsComponent"));
    this->m_matchChatManagerComponent = NULL;
}

void AYGameState_Match::SkipMatchState() {
}

void AYGameState_Match::SetMatchTimerVisibility(bool Visibility) {
}

void AYGameState_Match::SetMatchTimer(int32 Value) {
}

void AYGameState_Match::SetMatchState(EYMatchState matchState) {
}

void AYGameState_Match::OnRep_TimerUpdate() {
}

void AYGameState_Match::OnRep_MatchTimerVisibility() const {
}

void AYGameState_Match::OnRep_MatchState() {
}

void AYGameState_Match::OnRep_MapInfo() const {
}

void AYGameState_Match::OnPlayerGameDataChanged(FYPlayerStateChangeData stateData) const {
}

void AYGameState_Match::OnPlayerDeath(AYPlayerState* PlayerState) const {
}

void AYGameState_Match::MulticastPlayerLeftMatch_Implementation(AYPlayerState* PlayerState) {
}

void AYGameState_Match::MulticastDisplayDebugMessage_Implementation(const FYDebugMessage& Message) {
}

void AYGameState_Match::MulticastDebugNewTimeSet_Implementation(int32 newTime) {
}

UWorld* AYGameState_Match::GetWorld() const {
    return NULL;
}

int32 AYGameState_Match::GetTotalElapsedLobbyTime() const {
    return 0;
}

int32 AYGameState_Match::GetMatchTime() const {
    return 0;
}

EYMatchState AYGameState_Match::GetMatchState() const {
    return EYMatchState::EnteringMap;
}

FString AYGameState_Match::GetMapInfoRowId() {
    return TEXT("");
}

int32 AYGameState_Match::GetCurrentMatchTimer() const {
    return 0;
}

void AYGameState_Match::DebugSetCurrentMatchTime(int32 newTime) {
}

void AYGameState_Match::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYGameState_Match, m_matchState);
    DOREPLIFETIME(AYGameState_Match, m_matchTimer);
    DOREPLIFETIME(AYGameState_Match, m_matchTimerVisibility);
    DOREPLIFETIME(AYGameState_Match, m_mapInfoRowId);
}


