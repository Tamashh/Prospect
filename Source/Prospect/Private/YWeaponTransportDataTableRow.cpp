#include "YWeaponTransportDataTableRow.h"

FYWeaponTransportDataTableRow::FYWeaponTransportDataTableRow() {
    this->m_clientSideProjectile = false;
    this->m_scaleOffsetDirection = 0.0f;
    this->m_shouldHaveFxCategory = false;
    this->m_useShootingOffsetRandomization = false;
    this->m_shootTroughDynamicObjects = false;
    this->m_produceImpactRegadlessOfHit = false;
    this->m_transportType = EYWeaponTransportType::Invalid;
    this->m_transportCollisionTraceChannel = ECC_WorldStatic;
    this->m_supportsObjectPooling = false;
}

