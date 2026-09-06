#include "YFallingDamageInfo.h"

FYFallingDamageInfo::FYFallingDamageInfo() {
    this->m_distanceFalling = 0.0f;
    this->m_unmodifiedDamage = 0.0f;
    this->m_damage = 0.0f;
    this->m_healthBefore = 0.0f;
    this->m_healthAfter = 0.0f;
    this->m_startedAsJump = false;
}

