#include "YRadialDamageDealingData.h"

FYRadialDamageDealingData::FYRadialDamageDealingData() {
    this->m_radius = 0.0f;
    this->m_capsuleRadius = 0.0f;
    this->m_capsuleHalfHeight = 0.0f;
    this->m_falloffStartRange = 0.0f;
    this->m_falloffDamageMultiplier = 0.0f;
    this->m_playerDamageMultiplier = 0.0f;
    this->m_enemyDamageMultiplier = 0.0f;
    this->m_damageSelfMultiplier = 0.0f;
    this->m_healthDamage = 0.0f;
    this->m_damageCauser = NULL;
    this->m_damageInstigator = NULL;
    this->m_radialDamageImpulse = 0.0f;
    this->m_stabilityDamageForDeathRagdoll = 0.0f;
    this->m_ignorePawnsForDamagePreventionChecks = false;
    this->m_roleToReplicate = ROLE_None;
    this->m_damagePreventionChannel = ECC_WorldStatic;
    this->m_ignoreDamagePrevention = false;
    this->m_canDamageSelf = false;
    this->m_affectEnemyHitreaction = false;
    this->m_useDamageCauserForImpactDirection = false;
    this->m_damageIgnoreShield = false;
    this->m_penetration = 0.0f;
    this->m_isFriendlyFireAllowed = false;
    this->m_damageApplication = EYDamageApplication::Damage;
}

