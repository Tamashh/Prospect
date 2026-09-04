#include "YWeaponDamageRelevantValues.h"

FYWeaponDamageRelevantValues::FYWeaponDamageRelevantValues() {
    this->m_amountOfBursts = 0;
    this->m_numBursts = 0;
    this->m_amountOfImmediateFires = 0;
    this->m_numFiresPerCompleteBurst = 0;
    this->m_numImpactsPerImmediateFire = 0;
    this->m_numImpactsPerCompleteBurst = 0;
    this->m_directDamage = 0.0f;
    this->m_radialDamage = 0.0f;
    this->m_totalDamagePerImpact = 0.0f;
    this->m_totalDamageCompleteBurst = 0.0f;
    this->m_spinupTime = 0.0f;
    this->m_durationBurst = 0.0f;
    this->m_burstInterval = 0.0f;
    this->m_durationOfCompleteBurstIncludingRefireTime = 0.0f;
    this->m_refireTime = 0.0f;
    this->m_numCompleteBurstWithRefireTimePerSecond = 0.0f;
    this->m_damagePerSecond = 0.0f;
    this->m_numBurstsIncludeRefireTimePerMinute = 0.0f;
    this->m_roundsPerMinute = 0.0f;
    this->m_totalDamagePerFire = 0.0f;
}

