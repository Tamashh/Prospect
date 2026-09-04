#include "YStatusEffectRuntimeData.h"

FYStatusEffectRuntimeData::FYStatusEffectRuntimeData() {
    this->m_damagePerTick = 0.0f;
    this->m_damageTickFrequency = 0.0f;
    this->m_penetration = 0.0f;
    this->m_lastDamageTickTimestamp = 0.0f;
}

