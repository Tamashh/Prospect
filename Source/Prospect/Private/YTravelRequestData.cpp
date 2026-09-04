#include "YTravelRequestData.h"

FYTravelRequestData::FYTravelRequestData() {
    this->m_instanceType = EYTravelInstanceType::Invalid;
    this->m_loadMapDirectly = false;
    this->m_generatedRequest = false;
    this->m_evaluateSessionState = false;
    this->m_cancelExistingTravel = false;
    this->m_waitForResources = false;
    this->m_debugMatchmakingOption = EYMatchmakingDebugOption::None;
}

