#include "YDeathAnimMontageInfo.h"

FYDeathAnimMontageInfo::FYDeathAnimMontageInfo() {
    this->m_deathType = EYDeathType::Normal;
    this->m_montage = NULL;
    this->m_deathToRagdoll = false;
    this->m_serverTimeStamp = 0.0f;
}

