#include "YRuntimeVehicleData.h"

FYRuntimeVehicleData::FYRuntimeVehicleData() {
    this->m_relevantAcquisitionActor = NULL;
    this->m_cachedRelatedActor = NULL;
    this->m_state = EYVehicleStateType::Invalid;
}

