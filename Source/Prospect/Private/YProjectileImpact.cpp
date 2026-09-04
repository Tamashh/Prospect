#include "YProjectileImpact.h"

FYProjectileImpact::FYProjectileImpact() {
    this->m_hitComponent = NULL;
    this->m_hitActor = NULL;
    this->m_surfaceType = 0;
    this->m_boneIndexHit = 0;
    this->m_payload_a = 0.0f;
    this->m_payload_b = 0.0f;
}

