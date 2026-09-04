#include "YWeaponImpactDataTableRow.h"

FYWeaponImpactDataTableRow::FYWeaponImpactDataTableRow() {
    this->m_actorSpawnRotation = EYImpactActorRotation::UpVector_ImpactNormal;
    this->m_nonReplicatedActorToSpawn = NULL;
    this->m_shouldHaveFxCategory = false;
    this->m_useOwnerAsInstigatorForSenseTrigger = false;
}

