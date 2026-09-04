#include "YStabilityData.h"

FYStabilityData::FYStabilityData() {
    this->m_currentStabilityValue = 0.0f;
    this->m_lastTimeTriggered = 0.0f;
    this->m_lastTimeValueIncreased = 0.0f;
    this->m_lastTimeValueDecreased = 0.0f;
}

