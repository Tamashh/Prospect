#include "YInsuranceOffer.h"

FYInsuranceOffer::FYInsuranceOffer() {
    this->m_costSoftCurrency = 0;
    this->m_costPremiumCurrency = 0;
    this->m_costInsuranceCurrency = 0;
    this->m_purchasable = false;
    this->m_notEnoughSoftCurrency = false;
    this->m_notEnoughPremiumCurrency = false;
    this->m_maxClaimsReached = false;
}

