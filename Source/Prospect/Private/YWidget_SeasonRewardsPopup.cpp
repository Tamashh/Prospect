#include "YWidget_SeasonRewardsPopup.h"

UYWidget_SeasonRewardsPopup::UYWidget_SeasonRewardsPopup() {
    this->m_itemEntryWidget = NULL;
    this->m_itemNameWidget = NULL;
    this->m_itemImageWidget = NULL;
    this->m_seasonImage = NULL;
    this->m_dismissedSeasonPassPurchases = NULL;
    this->m_BITimeWhenShown = 0;
    this->m_audioComponentCraftingInProgress = NULL;
}

void UYWidget_SeasonRewardsPopup::OnPlayerStateSet() {
}

void UYWidget_SeasonRewardsPopup::OnPlayerSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData) {
}

void UYWidget_SeasonRewardsPopup::OnGrantsUpdated(const TArray<FYGrant>& grants) {
}

void UYWidget_SeasonRewardsPopup::HandleItemHovered(UYWidget_ItemContainer* itemSelected, bool Hovered) {
}

void UYWidget_SeasonRewardsPopup::HandleCanSeeSeasonPopupStateChanged(bool newState) {
}

void UYWidget_SeasonRewardsPopup::ClaimRewards() {
}







