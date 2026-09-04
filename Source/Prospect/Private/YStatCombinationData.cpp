#include "YStatCombinationData.h"

FYStatCombinationData::FYStatCombinationData() {
    this->m_anyGameMode = false;
    this->m_anyActivity = false;
    this->m_gameModeType = EYMatchmakeGameModeType::NONE;
    this->m_activityType = EYActivityType::None;
}

