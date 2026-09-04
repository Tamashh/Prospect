#include "YControllerCustomizationState.h"

FYControllerCustomizationState::FYControllerCustomizationState() {
    this->m_customizationMode = EYCustomizationMode::None;
    this->m_customizationCategory = EYCustomizationCategory::Invalid;
    this->m_rotationEnabled = false;
}

