#include "YAITuningRow.h"

FYAITuningRow::FYAITuningRow() {
    this->m_characterMovementSpeed = 0.0f;
    this->m_resetRadius = 0.0f;
    this->m_basePenetration = 0.0f;
    this->m_meleeStrafeMoveDistance = 0.0f;
    this->m_meleeBackOffDistance = 0.0f;
    this->m_weakAreaDamageMultiplier = 0.0f;
    this->m_stabilityDamageRagdollThresholds = 0.0f;
    this->m_type = EYEnemyType::None;
    this->m_defaultArmor = 0;
    this->m_effectiveHealthPerArmorConstant = 0.0f;
    this->m_damageReductionScalarMin = 0.0f;
    this->m_damageReductionScalarMax = 0.0f;
}

