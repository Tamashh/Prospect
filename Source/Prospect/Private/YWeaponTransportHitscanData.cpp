#include "YWeaponTransportHitscanData.h"

FYWeaponTransportHitscanData::FYWeaponTransportHitscanData() {
    this->m_maxTraceDistance = 0.0f;
    this->m_traceGroundWhenMaxDistanceHit = false;
    this->m_traceGround = false;
    this->m_traceComplexCollision = false;
    this->m_traceType = EYTraceShapeType::LineTrace;
    this->m_capsuleRadius = 0.0f;
    this->m_capsuleHalfHeight = 0.0f;
    this->m_collisionShapeMultiplierForGroundTrace = 0.0f;
}

