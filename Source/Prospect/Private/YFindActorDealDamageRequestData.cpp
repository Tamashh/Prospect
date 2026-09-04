#include "YFindActorDealDamageRequestData.h"

FYFindActorDealDamageRequestData::FYFindActorDealDamageRequestData() {
    this->m_damageCauser = NULL;
    this->m_radius = 0.0f;
    this->m_capsuleHalfHeight = 0.0f;
    this->m_skipFindClosestBoneCheck = false;
    this->m_skipTraceToVerifyHit = false;
    this->m_collisionChannel = ECC_WorldStatic;
}

