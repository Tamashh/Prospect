#include "YEncumbranceEffects_DataAsset.h"

UYEncumbranceEffects_DataAsset::UYEncumbranceEffects_DataAsset() {
    this->m_walkSpeedEffectCurve = NULL;
    this->m_maxStaminaEffectCurve = NULL;
    this->m_maximumEncumbranceWeight = 350;
    this->m_disableSprintThreshold = 0.0f;
    this->m_disableSprintLedgeGrabThreshold = 0.0f;
    this->m_disableSprintWallRunThreshold = 0.0f;
}


