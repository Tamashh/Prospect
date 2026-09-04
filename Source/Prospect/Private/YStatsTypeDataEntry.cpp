#include "YStatsTypeDataEntry.h"

FYStatsTypeDataEntry::FYStatsTypeDataEntry() {
    this->m_type = EYItemStatsType::None;
    this->m_baseValue = 0.0f;
    this->m_modifiedValue = 0.0f;
    this->m_difference = 0.0f;
}

