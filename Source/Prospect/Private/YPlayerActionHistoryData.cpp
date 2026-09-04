#include "YPlayerActionHistoryData.h"

FYPlayerActionHistoryData::FYPlayerActionHistoryData() {
    this->m_currentTimeMuted = 0;
    this->m_amountOfTimesMuted = 0;
    this->m_currentlyMuted = false;
    this->m_lastTimeTracked = 0.0f;
}

