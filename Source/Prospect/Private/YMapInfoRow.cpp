#include "YMapInfoRow.h"

FYMapInfoRow::FYMapInfoRow() {
    this->m_isVisible = false;
    this->m_difficulty = EYMatchMapDifficulty::Invalid;
    this->m_hasVoid = false;
    this->m_containsAlienForge = false;
    this->m_playerStartClusterRadius = 0.0f;
    this->m_playerStartClusterCooldown = 0.0f;
    this->m_maxScoreAllowed = 0;
}

