#include "YRewardsRollManagerComponent.h"

UYRewardsRollManagerComponent::UYRewardsRollManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_evacuationBonusDataTable = NULL;
    this->m_diedBonusTable = NULL;
    this->m_matchPlayedBonusDataTable = NULL;
    this->m_leaderboardPlacementRewardDataTable = NULL;
}


