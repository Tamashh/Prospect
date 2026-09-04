#include "YPlayerAwarenessTuningDataTableRow.h"

FYPlayerAwarenessTuningDataTableRow::FYPlayerAwarenessTuningDataTableRow() {
    this->m_maxNotificationDistance = 0;
    this->m_targetingMaxNotificationDistance = 0;
    this->m_dotProduct = 0.0f;
    this->m_dotScalingDistancePerMeterMultiplier = 0.0f;
    this->m_dotMaxmimumThreshold = 0.0f;
    this->m_requiredAimAtDuration = 0.0f;
    this->m_requiredAimAtDurationTargeting = 0.0f;
}

