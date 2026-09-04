#include "YImpactData.h"

FYImpactData::FYImpactData() {
    this->m_worldContextObject = NULL;
    this->m_actorHitOptional = NULL;
    this->m_componentHit = NULL;
    this->m_damageReduction = 0.0f;
    this->m_surfaceType = SurfaceType_Default;
    this->m_soundOwningActor = NULL;
}

