#include "YPlayerLoadingData.h"

FYPlayerLoadingData::FYPlayerLoadingData() {
    this->m_interruptionCauseBitMask = 0;
    this->m_timeStartedInitialization = 0.0f;
    this->m_initializationCompleted = false;
    this->m_timeTakenToInitialize = 0.0f;
}

