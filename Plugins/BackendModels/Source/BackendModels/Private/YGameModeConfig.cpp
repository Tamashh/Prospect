#include "YGameModeConfig.h"

FYGameModeConfig::FYGameModeConfig() {
    this->m_gameModeType = EYMatchmakeGameModeType::NONE;
    this->m_isRanked = false;
    this->m_isEnabled = false;
    this->m_isAlwaysVisible = false;
    this->m_isTournamentMode = false;
}

