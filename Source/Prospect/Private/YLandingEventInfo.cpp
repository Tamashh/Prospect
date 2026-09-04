#include "YLandingEventInfo.h"

FYLandingEventInfo::FYLandingEventInfo() {
    this->m_landingType = EYLandingType::Soft;
    this->m_fallingDistance = 0.0f;
    this->m_unmodifiedDamage = 0.0f;
    this->m_damage = 0.0f;
}

