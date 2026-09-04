#include "YRuntimeInitializationContext.h"

FYRuntimeInitializationContext::FYRuntimeInitializationContext() {
    this->m_controller = NULL;
    this->m_playerState = NULL;
    this->m_pawn = NULL;
    this->m_isAdditionalIntialized = false;
    this->m_requestSettingType = EYInitializationRequestSettingTypes::Invalid;
}

