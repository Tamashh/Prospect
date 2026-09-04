#include "YSoundNodeInteriorTransitionData.h"

FYSoundNodeInteriorTransitionData::FYSoundNodeInteriorTransitionData() {
    this->m_wasInInterior = false;
    this->m_currentInteriorTransitionTime = 0.0f;
    this->m_transitioningTowardsInterior = false;
}

