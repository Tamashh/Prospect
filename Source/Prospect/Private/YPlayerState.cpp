#include "YPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "YPlayerRewardsComponent.h"
#include "YPlayerStatsChallengesComponent.h"
#include "YPlayerStatsDeathsComponent.h"
#include "YPlayerStatsKillsComponent.h"

AYPlayerState::AYPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerCharacter = NULL;
    this->m_matchPlayerID = -1;
    this->m_lastImpactSurveillanceTimestamp = 0.0f;
    this->m_hasTrophy = false;
    this->m_hasRedTrophy = false;
    this->m_hasGreenTrophy = false;
    this->m_isDummyPlayerState = false;
    this->m_rewardsReceived = false;
    this->m_leftMatch = false;
    this->m_leftMatchWithoutFinishing = false;
    this->m_timeFinished = -1.0f;
    this->m_playerStatsDeathsComponent = CreateDefaultSubobject<UYPlayerStatsDeathsComponent>(TEXT("YPlayerStatsDeathsComponent"));
    this->m_playerStatsKillsComponent = CreateDefaultSubobject<UYPlayerStatsKillsComponent>(TEXT("YPlayerStatsKillsComponent"));
    this->m_playerStatsChallengesComponent = CreateDefaultSubobject<UYPlayerStatsChallengesComponent>(TEXT("YPlayerStatsChallengesComponent"));
    this->m_playerMatchState = EYPlayerMatchState::MatchLevelsLoaded;
    this->m_playerRewardsComponent = CreateDefaultSubobject<UYPlayerRewardsComponent>(TEXT("RewardsComponent"));
    this->m_factionId = TEXT("Korolev");
}

AYPlayerCharacter* AYPlayerState::TryGetYPlayerCharacter() const {
    return NULL;
}

void AYPlayerState::SetSelectedFaction(FName factionId) {
}

void AYPlayerState::SetPlayerMatchState(EYPlayerMatchState newState, const FString& contextString) {
}

void AYPlayerState::SetEquippedWeaponData(const FYActiveWeaponCharacterInitializationData& equippedWeaponData) {
}

void AYPlayerState::OnTakeDamage(const FYDealtDamageData& Data) {
}

void AYPlayerState::OnRep_PlayerMatchState() {
}

void AYPlayerState::OnRep_PlayerMatchFinishedResult() {
}

void AYPlayerState::OnRep_FactionId() {
}

void AYPlayerState::OnRep_CosmeticDataChanged(const FYPlayerCosmeticReplicatedData& oldData) const {
}

void AYPlayerState::OnMatchStateUpdated(EYMatchState matchState) {
}

void AYPlayerState::OnDeath(UYHealthComponent* healthComponent, AActor* deathInstigator) {
}

bool AYPlayerState::IsLocallyControlled() const {
    return false;
}

AYPlayerController_Match* AYPlayerState::GetYPlayerControllerMatch() const {
    return NULL;
}

AYPlayerController* AYPlayerState::GetYPlayerController() const {
    return NULL;
}

FName AYPlayerState::GetSelectedFaction() const {
    return NAME_None;
}

UYPlayerStatsKillsComponent* AYPlayerState::GetPlayerStatsKillsComponent() const {
    return NULL;
}

UYPlayerStatsDeathsComponent* AYPlayerState::GetPlayerStatsDeathsComponent() const {
    return NULL;
}

UYPlayerStatsChallengesComponent* AYPlayerState::GetPlayerStatsChallengesComponent() const {
    return NULL;
}

UYPlayerRewardsComponent* AYPlayerState::GetPlayerRewardsComponent() const {
    return NULL;
}

EYPlayerMatchState AYPlayerState::GetPlayerMatchState() const {
    return EYPlayerMatchState::MatchLevelsLoaded;
}

EYPlayerMatchFinishedResult AYPlayerState::GetPlayerMatchFinishedResult() const {
    return EYPlayerMatchFinishedResult::None;
}

UYPlayerBIDataComponent* AYPlayerState::GetPlayerBIDataComponent() const {
    return NULL;
}

FYProspectorLevelData AYPlayerState::GetInitialProspectorLevelProgress() const {
    return FYProspectorLevelData{};
}

FYActiveWeaponCharacterInitializationData AYPlayerState::GetEquippedWeaponData() const {
    return FYActiveWeaponCharacterInitializationData{};
}

void AYPlayerState::CachePlayerSeasonLevelAndXP(int32 Level, int32 xp) {
}

void AYPlayerState::CachePlayerProspectorProgress(FYProspectorLevelData& prospectorLevelData) {
}

void AYPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYPlayerState, m_hasTrophy);
    DOREPLIFETIME(AYPlayerState, m_replicatedCosmeticData);
    DOREPLIFETIME(AYPlayerState, m_playerMatchState);
    DOREPLIFETIME(AYPlayerState, m_playerMatchFinishedResultInfo);
    DOREPLIFETIME(AYPlayerState, m_factionId);
    DOREPLIFETIME(AYPlayerState, m_equippedWeaponData);
}


