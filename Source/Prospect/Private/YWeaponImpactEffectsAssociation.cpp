#include "YWeaponImpactEffectsAssociation.h"

FYWeaponImpactEffectsAssociation::FYWeaponImpactEffectsAssociation() {
    this->m_impactVfx = NULL;
    this->m_additionalImpactVfx = NULL;
    this->m_attachImpactVfx = false;
    this->m_playImpactVfxOnLocallyControlledPawn = false;
    this->m_slerpMaxImpactDirectionValue = 0.0f;
    this->m_slerpMinImpactDirectionValue = 0.0f;
    this->m_maxRandomImpactDirectionConeAngle = 0.0f;
    this->m_playImpactSfxOnOwner = false;
    this->m_tryProjectImpactLocationOnSkeletalMesh = false;
}

