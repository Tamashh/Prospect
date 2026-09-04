#include "YCharacterCustomizationRowBase.h"

FYCharacterCustomizationRowBase::FYCharacterCustomizationRowBase() {
    this->m_animationToPlayWhenActivated = NULL;
    this->m_animationSequence = NULL;
    this->m_materialIndexOverride = 0;
    this->m_bodyType = EYCustomizationBodyType::INVALID;
    this->m_customizationCategoryType = EYCustomizationCategory::Invalid;
    this->m_shouldMerge = false;
    this->m_shouldShowIngame = false;
    this->m_shouldUpload = false;
    this->m_ignoreForAutomationTests = false;
    this->m_applyRefPoseOverride = false;
    this->m_duration = 0.0f;
}

