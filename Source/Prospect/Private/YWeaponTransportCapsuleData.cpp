#include "YWeaponTransportCapsuleData.h"

FYWeaponTransportCapsuleData::FYWeaponTransportCapsuleData() {
    this->m_radius = 0.0f;
    this->m_halfHeight = 0.0f;
    this->m_skipTraceToVerifyHit = false;
    this->m_minDot2DThreshold = 0.0f;
    this->m_verifyLineOfSight = false;
}

