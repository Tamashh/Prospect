#include "YAbilityActionHealWardData.h"

FYAbilityActionHealWardData::FYAbilityActionHealWardData() {
    this->m_healPerSecond = 0.0f;
    this->m_healWardFinalRadius = 0.0f;
    this->m_attachToOwner = false;
    this->m_isDestructable = false;
    this->m_healwardMaterial = NULL;
    this->m_application = EYDamageApplication::Damage;
}

