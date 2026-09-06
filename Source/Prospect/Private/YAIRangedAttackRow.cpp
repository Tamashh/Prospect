#include "YAIRangedAttackRow.h"

FYAIRangedAttackRow::FYAIRangedAttackRow() {
    this->m_overrideProjectileGravity = 0.0f;
    this->m_shootStraight = false;
    this->m_requestedArc = 0.0f;
    this->m_accuracy = 0.0f;
    this->m_attackRadiusAroundTarget = 0.0f;
    this->m_shootAtGroundLocationOfTarget = false;
    this->m_maxAllowedAttackAngleYaw = 0.0f;
}

