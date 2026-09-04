#include "YWeaponTransportProjectileData.h"

FYWeaponTransportProjectileData::FYWeaponTransportProjectileData() {
    this->m_projectileClass = NULL;
    this->m_gravityScale = 0.0f;
    this->m_bounciniess = 0.0f;
    this->m_shouldBeArmed = false;
    this->m_armingTime = 0.0f;
    this->m_friction = 0.0f;
    this->m_returnPhysMaterialOnMove = false;
    this->m_initialProjectileSpeed = 0.0f;
    this->m_acceleration = 0.0f;
    this->m_accelerationApplyDelayTime = 0.0f;
    this->m_applyAccelerationAdditionalMaxSpeed = 0.0f;
    this->m_homingAccelerationMagnitude = 0.0f;
    this->m_maxSpeed = 0.0f;
    this->m_bounce = false;
    this->m_collisionRadius = 0.0f;
    this->m_maxAllowedDotProductToTurnWhenHoming = 0.0f;
    this->m_projectileLifetime = 0.0f;
    this->m_particleAdditionalLifetimeOnImpact = 0.0f;
    this->m_playClientSideProjectile = false;
}

