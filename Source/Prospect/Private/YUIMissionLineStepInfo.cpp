#include "YUIMissionLineStepInfo.h"

FYUIMissionLineStepInfo::FYUIMissionLineStepInfo() {
    this->m_startProgress = 0;
    this->m_maxProgress = 0;
    this->m_stepIcon = NULL;
    this->shouldShowPopup = false;
    this->m_initialized = false;
    this->m_ismissionCompletedEntry = false;
}

