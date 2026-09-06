#include "YMissionRuntimeData.h"

FYMissionRuntimeData::FYMissionRuntimeData() {
    this->m_stepIndex = 0;
    this->m_sendBackendUpdateOnStepCompletion = false;
    this->m_sendAnalyticsOnClient = false;
    this->m_useVoiceOverOnStepStart = false;
    this->m_useVoiceOverOnStepEnd = false;
}

