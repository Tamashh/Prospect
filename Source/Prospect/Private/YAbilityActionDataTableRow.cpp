#include "YAbilityActionDataTableRow.h"

FYAbilityActionDataTableRow::FYAbilityActionDataTableRow() {
    this->m_placementActorClass = NULL;
    this->m_placementSize = 0.0f;
    this->m_attachSkeletalMeshTime = 0.0f;
    this->m_activeTime = 0.0f;
    this->m_timeToActivateFromReady = 0.0f;
    this->m_traceTransportTowardsGround = false;
    this->m_directionAdditionalOffset = 0.0f;
    this->m_velocityLocationMultiplier = 0.0f;
    this->m_forwardToUpAddition = 0.0f;
    this->m_zOffsetAddition = 0.0f;
    this->m_startLocationFromOwnerRoot = false;
    this->m_adjustStartLocationBasedOnTrace = false;
    this->m_isClientSidePredicted = false;
    this->m_transportCollisionChannel = ECC_WorldStatic;
    this->m_removeFromPerceptionSystemWhenActive = false;
}

