#include "YMissionReplicatedStateData.h"

FYMissionReplicatedStateData::FYMissionReplicatedStateData() {
    this->m_currentStepIndex = 0;
    this->m_previousStepIndex = 0;
    this->m_resultType = EYMissionResultType::Active;
}

