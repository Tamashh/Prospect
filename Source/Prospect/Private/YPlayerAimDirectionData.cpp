#include "YPlayerAimDirectionData.h"

FYPlayerAimDirectionData::FYPlayerAimDirectionData() {
    this->m_isTargeting = false;
    this->m_isPendingTargeting = false;
    this->m_aimPitchRaw = 0.0f;
    this->m_aimPitchSmooth = 0.0f;
    this->m_aimPitchSmoothNormalized = 0.0f;
    this->m_deltaAimPitch = 0.0f;
    this->m_interpDeltaAimPitch = 0.0f;
    this->m_aimYawRaw = 0.0f;
    this->m_aimYawSmooth = 0.0f;
    this->m_aimYawSmoothNormalized = 0.0f;
    this->m_deltaAimYaw = 0.0f;
    this->m_interpDeltaAimYaw = 0.0f;
    this->m_direction = 0.0f;
    this->m_doRotationReset = false;
}

