#include "YAISenseTuningRow.h"

FYAISenseTuningRow::FYAISenseTuningRow() {
    this->m_sightRadius = 0.0f;
    this->m_farSightRadius = 0.0f;
    this->m_loseSightRadiusAdditional = 0.0f;
    this->m_peripheralVisionAngleDegrees = 0.0f;
    this->m_timeUntilAIResetsAfterLostSight = 0.0f;
    this->m_hearingRange = 0.0f;
    this->m_hearingEventsRangeMultiplier = 0.0f;
    this->m_shareSenseRadius = 0.0f;
    this->m_proximitySenseRadius = 0.0f;
}

