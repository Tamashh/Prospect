#include "YVehicleRowBase.h"

FYVehicleRowBase::FYVehicleRowBase() {
    this->m_lifetimeAfterDeath = 0.0f;
    this->m_MovementSpeedBackwardsMovement = 0.0f;
    this->m_vehicleSideDirectionFrictionDirection = 0.0f;
    this->m_vehicleBackwardFrictionDirection = 0.0f;
    this->m_vehicleBackwardSpeedMultiplierAccel = 0.0f;
    this->m_angularAccelerationMultiplierLeft = 0.0f;
    this->m_vehicleSideMovementSpeedMultiplierAccel = 0.0f;
    this->m_vehicleTurnSpeedMultiplier = 0.0f;
    this->m_vehicleAdditionalMovementSpeedBank = 0.0f;
    this->m_MovementSpeedSideMovement = 0.0f;
    this->m_vehicleRotationMaxSpeed = 0.0f;
    this->m_vehicleGlobalAccelerationModifier = 0.0f;
    this->m_vehicleFriction = 0.0f;
    this->m_vehicleBreaking = 0.0f;
    this->m_vehicleRotationIncrementSpeed = 0.0f;
    this->m_vehicleDecrementRotationRate = 0.0f;
    this->m_vehicleDeltaPitchRollRotationRate = 0.0f;
    this->m_vehicleMovementSpeedBackwardsMovement = 0.0f;
    this->m_vehicleMovementSpeedSideMovement = 0.0f;
    this->m_vehicleMovementSpeedAccelerationBackwardsMovement = 0.0f;
    this->m_vehicleMovementSpeedAccelerationSideMovement = 0.0f;
    this->m_vehicleMovementSpeed = 0.0f;
    this->m_vehicleBoostMovementSpeed = 0.0f;
    this->m_vehicleStandaloneBackwardsFriction = 0.0f;
    this->m_vehicleStandaloneMaxSpeed = 0.0f;
    this->m_vehicleStandaloneJumpOffVelocityMultiplier = 0.0f;
    this->m_vehicleDamageAtDestruction = 0.0f;
    this->m_vehicleRadiusDamageAtDestruction = 0.0f;
    this->m_vehicleRadiusDamageFallofStartRange = 0.0f;
    this->m_vehicleRadiusDamageFalloffMultiplier = 0.0f;
    this->m_vehicleOwnedInteractionTimeMultiplier = 0.0f;
    this->m_vehicleNotOwnedInteractionTimeMultiplier = 0.0f;
    this->m_minVelocityMaxSpeedInterpDealDamage = 0.0f;
    this->m_damageVelocityStartInterpolate = 0.0f;
    this->m_damageVelocityMaxInterpolate = 0.0f;
    this->m_minimumPerDamageIntervalTime = 0.0f;
    this->m_vehicleTurnBoostSpeedModifier = 0.0f;
    this->m_vehicleJumpVelocity = 0.0f;
}

