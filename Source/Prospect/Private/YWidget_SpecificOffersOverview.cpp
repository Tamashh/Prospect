#include "YWidget_SpecificOffersOverview.h"

UYWidget_SpecificOffersOverview::UYWidget_SpecificOffersOverview() {
    this->m_offerListContainer = NULL;
    this->m_overrideOfferLayout = false;
    this->m_overrideOfferLayoutIndex = 0;
    this->m_exclusivePromotionType = EYPromotionType::None;
    this->m_exclusiveGrantType = EYGrantType::None;
}

void UYWidget_SpecificOffersOverview::OnShopUpdated() {
}

void UYWidget_SpecificOffersOverview::OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers) {
}

void UYWidget_SpecificOffersOverview::HandleItemClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_SpecificOffersOverview::HandleBackButtonWidgetClicked() {
}

void UYWidget_SpecificOffersOverview::GoToCurrencyOffers() {
}


