#include "YPlayerRewardsComponent.h"
#include "Net/UnrealNetwork.h"

UYPlayerRewardsComponent::UYPlayerRewardsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_materialsMultiplier = 1.0f;
    this->m_currenciesMultiplier = 1.0f;
    this->m_factionProgressMutiplier = 1.0f;
    this->m_seasonXPMutiplier = 1.0f;
}

void UYPlayerRewardsComponent::OnRep_NewVictoryPoints() {
}

void UYPlayerRewardsComponent::OnRep_NewTotalVictoryPointsLevel() {
}

void UYPlayerRewardsComponent::OnRep_NewMatchResultRewards() {
}

void UYPlayerRewardsComponent::OnRep_NewInMatchRewards() {
}

void UYPlayerRewardsComponent::OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState) {
}

int32 UYPlayerRewardsComponent::GetInMatchRewardsCount(EYRewardType rewardType) const {
    return 0;
}

TArray<FYRewardEntry> UYPlayerRewardsComponent::GetInMatchRewards(EYRewardType rewardType) const {
    return TArray<FYRewardEntry>();
}

TArray<FYRewardEntry> UYPlayerRewardsComponent::GetAllMatchRewardsResult(EYRewardType rewardType) const {
    return TArray<FYRewardEntry>();
}

void UYPlayerRewardsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerRewardsComponent, m_inMatchRewards);
    DOREPLIFETIME(UYPlayerRewardsComponent, m_matchResultRewards);
}


