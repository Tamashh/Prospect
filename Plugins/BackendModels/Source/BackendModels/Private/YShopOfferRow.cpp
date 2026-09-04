#include "YShopOfferRow.h"

FYShopOfferRow::FYShopOfferRow() {
    this->m_currencyType = EYCurrencyType::Invalid;
    this->m_price = 0;
    this->m_offerRarity = EYOfferRarity::Invalid;
    this->m_isOneTimePurchase = false;
    this->m_isSeasonLevel = false;
}

