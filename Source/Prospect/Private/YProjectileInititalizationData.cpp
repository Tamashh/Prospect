#include "YProjectileInititalizationData.h"

FYProjectileInititalizationData::FYProjectileInititalizationData() {
    this->m_overrideGravity = 0.0f;
    this->m_transportHandle = 0;
    this->m_homingToComponet = NULL;
    this->m_armingTime = 0.0f;
    this->m_clientSideProjectile = false;
    this->m_isTargeting = false;
}

