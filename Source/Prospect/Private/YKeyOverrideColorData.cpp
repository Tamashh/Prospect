#include "YKeyOverrideColorData.h"

FYKeyOverrideColorData::FYKeyOverrideColorData() {
    this->m_handle = 0;
    this->m_isOverrideVisible = 0;
    this->m_lerpStartSign = 0;
    this->m_deltaTime = 0.0f;
    this->m_duration = 0.0f;
    this->m_interval = 0.0f;
    this->m_multiplier = 0.0f;
    this->m_lerpBehavior = EYLerpBehavior::Constant;
    this->m_isActive = false;
}

