#include "YDealtDamageData.h"

FYDealtDamageData::FYDealtDamageData() {
    this->m_componentToDamage = NULL;
    this->m_originalDamageCauser = NULL;
    this->m_damageCauser = NULL;
    this->m_damageCauserPlayerState = NULL;
    this->m_damageInstigator = NULL;
    this->m_shieldDamage = 0.0f;
    this->m_healthDamage = 0.0f;
    this->m_vehicleDamage = 0.0f;
    this->m_overkillDamage = 0.0f;
    this->m_stabilityDamage = 0.0f;
    this->m_stabilityDamageForDeathRagdoll = 0.0f;
    this->m_impulseDamage = 0.0f;
    this->m_damageMitigation = 0.0f;
    this->m_damageApplication = EYDamageApplication::Damage;
    this->m_isFriendlyFireAllowed = false;
    this->m_preventBeingLethalAndPreventEnteringDBNO = false;
    this->m_hitDBNOPlayer = false;
    this->m_isDamageDot = false;
    this->m_isWeakspotDamage = false;
    this->m_damageAreaMultiplier = 0.0f;
    this->m_penetration = 0.0f;
    this->m_isFromRadialDamage = false;
    this->m_shieldReducedToZero = false;
    this->m_diedOfThisDamage = false;
    this->m_teleportedBecauseOfThisDamage = false;
    this->m_causedDBNO = false;
    this->m_allowDBNO = false;
    this->m_produceHitFeedback = false;
    this->m_isHealDamage = false;
    this->m_canDamageSelf = false;
    this->m_shouldInterrupInteraction = false;
    this->m_childActorInitiated = false;
    this->m_affectEnemyHitreaction = false;
    this->m_ignoreShield = false;
    this->m_isPropagatedData = false;
    this->m_excludeFromBIData = false;
    this->m_isEventOnlyPredicted = false;
    this->m_roleToReplicate = ROLE_None;
    this->m_boneIndexHit = 0;
    this->m_surfaceTypeHit = SurfaceType_Default;
}

