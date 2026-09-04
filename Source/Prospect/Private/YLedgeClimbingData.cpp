#include "YLedgeClimbingData.h"

FYLedgeClimbingData::FYLedgeClimbingData() {
    this->m_isClimbing = false;
    this->m_normalizedAlpha_01 = 0.0f;
    this->m_normalizedAlpha_02 = 0.0f;
    this->m_normalizedAlpha_03 = 0.0f;
    this->m_climbingStateInternal = EYClimbingStateInternal::None;
    this->m_moveType = EYMoveType::None;
    this->m_obstacleType = EYObstacleType::None;
}

