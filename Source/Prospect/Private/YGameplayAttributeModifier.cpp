#include "YGameplayAttributeModifier.h"

FYGameplayAttributeModifier::FYGameplayAttributeModifier() {
    this->m_attribute = EYGameplayAttribute::None;
    this->m_modifierType = EYGPAModifierType::Additive;
    this->m_modifierValue = 0.0f;
    this->m_minAttributeValue = 0.0f;
    this->m_duration = 0.0f;
    this->m_lerpTime = 0.0f;
    this->m_timestampActivated = 0.0f;
    this->m_lerpStartModifierValue = 0.0f;
    this->m_lerpEndModifierValue = 0.0f;
    this->m_runtimeAttributeValue = 0.0f;
    this->m_instigator = NULL;
    this->m_overridenContextType = EYGameplayContextType::Unknown;
    this->m_specifiedContextType = EYGameplayContextType::Unknown;
}

