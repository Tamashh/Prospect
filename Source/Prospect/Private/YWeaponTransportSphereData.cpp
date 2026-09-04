#include "YWeaponTransportSphereData.h"

FYWeaponTransportSphereData::FYWeaponTransportSphereData() {
    this->m_radius = 0.0f;
    this->m_skipTraceToVerifyHit = false;
    this->m_minDot2DThreshold = 0.0f;
    this->m_verifyLineOfSight = false;
}

