#include "YStatusEffectAreaRow.h"

FYStatusEffectAreaRow::FYStatusEffectAreaRow() {
    this->m_damagePerTick = 0.0f;
    this->m_damageTickFrequency = 0.0f;
    this->m_penetration = 0.0f;
    this->m_damageContext = EYGameplayContextType::Unknown;
}

