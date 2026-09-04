#include "YAnalyticsTypesSettingsRow.h"

FYAnalyticsTypesSettingsRow::FYAnalyticsTypesSettingsRow() {
    this->m_isEnabled = false;
    this->m_ignoreUserSampling = false;
    this->m_samplingRate = 0;
    this->m_serverSideSampling = false;
}

