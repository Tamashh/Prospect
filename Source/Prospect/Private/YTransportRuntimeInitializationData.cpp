#include "YTransportRuntimeInitializationData.h"

FYTransportRuntimeInitializationData::FYTransportRuntimeInitializationData() {
    this->m_owner = NULL;
    this->m_transportHandle = 0;
    this->m_overrideGravity = 0.0f;
    this->m_overrideLaunchVelocity = 0.0f;
    this->m_homingToComponet = NULL;
    this->m_collisionChannelTrace = ECC_WorldStatic;
    this->m_replicateSkipAutonomous = false;
    this->m_skipFindClosestBoneCheck = false;
    this->m_clientSideProjectile = false;
    this->m_isTargeting = false;
    this->m_normalizeDirectionVector = false;
    this->m_randomSeed = 0;
}

