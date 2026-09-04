#include "YActionKillConditions.h"

FYActionKillConditions::FYActionKillConditions() {
    this->m_killTarget = EYKillTypeAction::Invalid;
    this->m_specificAIEnemyTypeToKill = EYEnemyType::None;
    this->m_onlyDuringStorm = false;
}

