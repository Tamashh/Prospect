#include "YAIMeleeAttackDefinition.h"

FYAIMeleeAttackDefinition::FYAIMeleeAttackDefinition() {
    this->m_predictProjectilePath = false;
    this->m_minDistanceToPredictedHitToAllowAttack = 0.0f;
    this->m_meleeAttackRangeMin = 0.0f;
    this->m_meleeAttackRangeMax = 0.0f;
    this->m_velocityOwnerMin = 0.0f;
    this->m_blockTime = 0.0f;
    this->m_meleeAttackDot2D = 0.0f;
    this->m_meleeAttackMaxVelocityPredicition = 0.0f;
    this->m_meleeDamageCheckDistanceOffset = 0.0f;
}

