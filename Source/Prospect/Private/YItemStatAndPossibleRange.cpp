#include "YItemStatAndPossibleRange.h"

FYItemStatAndPossibleRange::FYItemStatAndPossibleRange() {
    this->m_itemStatType = EYItemStatsType::None;
    this->m_currentVal = 0.0f;
    this->m_worstVal = 0.0f;
    this->m_bestVal = 0.0f;
}

