#include "YWidget_ProspectorLevelRewardsPopup.h"

UYWidget_ProspectorLevelRewardsPopup::UYWidget_ProspectorLevelRewardsPopup() {
    this->m_prospectorLevelRewardType = EYProspectorLevelRewardType::None;
    this->m_itemEntryWidget = NULL;
    this->m_bgImage = NULL;
    this->m_audioComponentCraftingInProgress = NULL;
}

void UYWidget_ProspectorLevelRewardsPopup::OnPlayerStateSet(AYPlayerState* PlayerState) {
}

void UYWidget_ProspectorLevelRewardsPopup::OnPlayerSocialProfileDataUpdated(const FYProspectorLevelData& playerProfileData) {
}

void UYWidget_ProspectorLevelRewardsPopup::OnGrantsUpdated(const TArray<FYGrant>& grants) {
}

void UYWidget_ProspectorLevelRewardsPopup::HandleCanSeeProspectorLevelPopupStateChanged(bool newState) {
}

void UYWidget_ProspectorLevelRewardsPopup::ClaimRewards() {
}







