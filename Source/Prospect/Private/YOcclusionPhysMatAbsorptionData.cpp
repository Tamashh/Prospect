#include "YOcclusionPhysMatAbsorptionData.h"

FYOcclusionPhysMatAbsorptionData::FYOcclusionPhysMatAbsorptionData() {
    this->m_priority = 0;
    this->m_absorptionAmount = 0.0f;
    this->m_useLowPassCutoffFrequency = false;
    this->m_occlusionLowPassCutoffFrequency = 0.0f;
    this->m_useHighPassCutoffFrequency = false;
    this->m_occlusionHighPassCutoffFrequency = 0.0f;
}

