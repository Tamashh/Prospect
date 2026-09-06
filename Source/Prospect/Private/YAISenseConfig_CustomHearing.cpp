#include "YAISenseConfig_CustomHearing.h"

UYAISenseConfig_CustomHearing::UYAISenseConfig_CustomHearing() {
    this->Implementation = NULL;
    this->m_hearingRange = 1000.0f;
    this->m_noiseEventRangeMultiplier = 1.0f;
}
