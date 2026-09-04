#include "YWidget_SpecialOffersOverview.h"

UYWidget_SpecialOffersOverview::UYWidget_SpecialOffersOverview() {
    this->m_promotionType = EYPromotionType::None;
    this->m_offerListContainer = NULL;
    this->m_offersTimer = NULL;
}

void UYWidget_SpecialOffersOverview::OnShopUpdated() {
}

void UYWidget_SpecialOffersOverview::OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers) {
}

void UYWidget_SpecialOffersOverview::HandleItemClicked(UYWidget_ItemContainer* SelectedItem) {
}


