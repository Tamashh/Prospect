#include "YTransitionRequestData.h"

FYTransitionRequestData::FYTransitionRequestData() {
    this->m_requestType = EYTransitionRequest::None;
    this->m_viewTarget = NULL;
    this->m_lockTime = 0.0f;
    this->m_withViewTargetParams = false;
    this->m_withTransition = false;
}

