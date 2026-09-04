#include "YInventoryItem.h"

FYInventoryItem::FYInventoryItem() {
    this->m_amount = 0;
    this->m_durability = 0;
    this->m_weight = 0.0f;
    this->m_insurance = EYInsuranceType::None;
}

