#include "YItemStatsAssociationEntry.h"

FYItemStatsAssociationEntry::FYItemStatsAssociationEntry() {
    this->m_type = EYItemStatsType::None;
    this->m_maxValue = 0.0f;
    this->m_minValue = 0.0f;
    this->m_inversePercent = false;
    this->m_curveTranspose = NULL;
}

