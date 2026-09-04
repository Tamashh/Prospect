#include "YSceneRuntimeInitializationData.h"

FYSceneRuntimeInitializationData::FYSceneRuntimeInitializationData() {
    this->m_requireTransitionOverlay = false;
    this->m_doCameraTransition = false;
    this->m_startingSceneState = EYSceneState::None;
}

