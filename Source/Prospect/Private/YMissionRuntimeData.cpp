#include "YMissionRuntimeData.h"

FYMissionRuntimeData::FYMissionRuntimeData() {
    this->m_stepIndex = 0;
    this->m_useVoiceOver = false;
    this->m_sendBackendUpdateOnStepCompletion = false;
    this->m_sendAnalyticsOnClient = false;
}

