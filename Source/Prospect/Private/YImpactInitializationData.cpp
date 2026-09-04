#include "YImpactInitializationData.h"

FYImpactInitializationData::FYImpactInitializationData() {
    this->m_owner = NULL;
    this->m_instigator = NULL;
    this->m_damageReduction = 0.0f;
    this->m_componentToDamage = NULL;
    this->m_componentHit = NULL;
    this->m_transportHandle = 0;
    this->m_surfaceType = SurfaceType_Default;
    this->m_isWeakspot = false;
    this->m_isKillShot = false;
    this->m_isShieldReducedToZero = false;
    this->m_damageAreaMultiplier = 0.0f;
    this->m_isFriendlyFireAllowed = false;
    this->m_replicate = false;
    this->m_replicateSkipAutonomous = false;
    this->m_skipDamageDealing = false;
    this->m_isTargeting = false;
    this->m_requiresValidWeaponImpactDataTableRow = false;
    this->m_boneIndexHit = 0;
    this->m_lifetime = 0.0f;
}

