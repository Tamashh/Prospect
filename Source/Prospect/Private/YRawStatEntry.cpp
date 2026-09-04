#include "YRawStatEntry.h"

FYRawStatEntry::FYRawStatEntry() {
    this->m_statValue = 0.0f;
    this->m_oldStatValue = 0.0f;
    this->m_gameMode = EYMatchmakeGameModeType::NONE;
    this->m_activityType = EYActivityType::None;
    this->m_isCustomStat = false;
    this->m_hasUpdated = false;
}

