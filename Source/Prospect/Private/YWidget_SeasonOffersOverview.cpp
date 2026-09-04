#include "YWidget_SeasonOffersOverview.h"

UYWidget_SeasonOffersOverview::UYWidget_SeasonOffersOverview() {
    this->m_seasonOfferListContainer = NULL;
    this->m_seasonOffersTimer = NULL;
}

void UYWidget_SeasonOffersOverview::OnShopUpdated() {
}

void UYWidget_SeasonOffersOverview::OnSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData) {
}

void UYWidget_SeasonOffersOverview::OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers) {
}

void UYWidget_SeasonOffersOverview::HandleItemClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_SeasonOffersOverview::GoToCurrencyOffers() {
}



