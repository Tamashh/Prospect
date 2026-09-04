#include "YSessionDebugInformation.h"

FYSessionDebugInformation::FYSessionDebugInformation() {
    this->m_currentPingLimit = 0.0f;
    this->m_badPingTimeInSeconds = 0.0f;
    this->m_badPingTimeReset = 0.0f;
    this->m_badOccuranceMax = 0.0f;
    this->m_currentPing = 0.0f;
    this->m_serverFeatureToggle1 = false;
    this->m_serverFeatureToggle2 = false;
    this->m_serverFeatureToggle3 = false;
}

