#include "YCameraTransitionData.h"

FYCameraTransitionData::FYCameraTransitionData() {
    this->m_playerState = EYPlayerStateBlueprint::None;
    this->m_stateCancelBehavior = EYStateCancelationBehavior::Nothing;
    this->m_duration = 0.0f;
    this->m_transitionTowardsFirstPerson = false;
    this->m_clearTranslationOffsetOnCompletion = false;
}

