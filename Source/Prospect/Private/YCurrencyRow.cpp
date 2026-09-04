#include "YCurrencyRow.h"

FYCurrencyRow::FYCurrencyRow() {
    this->m_currencyType = EYCurrencyType::Invalid;
    this->m_newPlayerInitialDeposit = 0;
    this->m_shouldUseMaterialRepresentation = false;
    this->m_upperCap = 0;
}

