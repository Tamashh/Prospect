#include "YAbilityActionBombardmentData.h"

FYAbilityActionBombardmentData::FYAbilityActionBombardmentData() {
    this->m_radius = 0.0f;
    this->m_damageCapsuleRadius = 0.0f;
    this->m_damageCapsuleHalfHeight = 0.0f;
    this->m_damage = 0.0f;
    this->m_damageDuration = 0.0f;
    this->m_warmUpDuration = 0.0f;
    this->m_bombardmentStartParticleSystem = NULL;
    this->m_bombardmentEndParticleSystem = NULL;
    this->m_amountOfStrikes = 0;
    this->m_application = EYDamageApplication::Damage;
}

