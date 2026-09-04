#include "YPlayerRankDataEntry.h"

FYPlayerRankDataEntry::FYPlayerRankDataEntry() {
    this->m_gameModeType = EYMatchmakeGameModeType::NONE;
    this->m_rank = 0;
    this->m_highestRank = 0;
    this->m_isLocalPlayer = false;
}

