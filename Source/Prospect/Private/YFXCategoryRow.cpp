#include "YFXCategoryRow.h"

FYFXCategoryRow::FYFXCategoryRow() {
    this->m_trailFX = NULL;
    this->m_playTrailVFXEmitterForProjectiles = false;
    this->m_defaultBeamFX = NULL;
    this->m_defaultSpinupFx = NULL;
    this->m_projectileParticleSystem = NULL;
    this->m_playImpactEffectOnAutonomous = false;
    this->m_fireFxIsLooping = false;
    this->m_fireFxIsBeamEndPoint = false;
    this->m_impactCameraShake = NULL;
    this->m_impactShakeInnerRadius = 0.0f;
    this->m_impactShakeOuterRadius = 0.0f;
}

