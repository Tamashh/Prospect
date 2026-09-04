#include "YDOTDamageEntry.h"

FYDOTDamageEntry::FYDOTDamageEntry() {
    this->m_initiator = NULL;
    this->m_duration = 0.0f;
    this->m_deltaTime = 0.0f;
    this->m_damageInterval = 0.0f;
    this->m_timeStarted = 0.0f;
    this->m_damagePerInterval = 0.0f;
    this->m_ticks = 0;
}

