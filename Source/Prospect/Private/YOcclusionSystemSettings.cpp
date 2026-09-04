#include "YOcclusionSystemSettings.h"

FYOcclusionSystemSettings::FYOcclusionSystemSettings() {
    this->m_maximumFrameMs = 0.0f;
    this->m_soundMaxDistanceThresholdMultiplier = 0.0f;
    this->m_maxAsyncTraceCount = 0;
    this->m_maxSyncTraceCount = 0;
    this->m_considerSyncTracesForMaxAsyncCount = false;
    this->m_listenerSize = 0.0f;
}

