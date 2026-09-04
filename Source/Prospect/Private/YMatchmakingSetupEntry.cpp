#include "YMatchmakingSetupEntry.h"

FYMatchmakingSetupEntry::FYMatchmakingSetupEntry() {
    this->maxAmountOfPlayers = 0;
    this->maxAmountOfPlayersBeginner = 0;
    this->hasBeginnerSoloBracket = false;
    this->hasBeginnerDuoBracket = false;
    this->hasBeginnerTrioBracket = false;
    this->matchmakingRatingMode = EYMatchmakingRatingMode::None;
    this->m_sessionTotalLengthUntilShutdown = 0;
    this->m_sessionUntilNoMatchmaking = 0;
    this->m_sessionNoPlayerConnectServerShutdown = 0;
}

