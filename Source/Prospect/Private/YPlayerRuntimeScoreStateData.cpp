#include "YPlayerRuntimeScoreStateData.h"

FYPlayerRuntimeScoreStateData::FYPlayerRuntimeScoreStateData() {
    this->m_state = EYPlayerGameDataStateType::Normal;
    this->m_score = 0;
    this->m_isActive = false;
}

