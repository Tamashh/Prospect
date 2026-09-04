#include "YPlayerEncounter.h"

FYPlayerEncounter::FYPlayerEncounter() {
    this->m_isKillEncounter = false;
    this->m_isOtherPlayer = false;
    this->m_type = EYPlayerEncounterType::None;
    this->m_timestampStarted = 0.0f;
    this->m_timestampLastUpdate = 0.0f;
    this->m_damage = 0.0f;
}

