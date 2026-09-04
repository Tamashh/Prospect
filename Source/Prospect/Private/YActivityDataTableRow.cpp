#include "YActivityDataTableRow.h"

FYActivityDataTableRow::FYActivityDataTableRow() {
    this->m_activityType = EYActivityType::None;
    this->m_multiplierActorsAtMatchStart = 0.0f;
    this->m_respawnCheckInterval = 0.0f;
    this->m_maxActorsToSpawnPerCheck = 0;
    this->m_minimumDistanceToPlayers = 0.0f;
}

