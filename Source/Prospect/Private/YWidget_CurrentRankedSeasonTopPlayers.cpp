#include "YWidget_CurrentRankedSeasonTopPlayers.h"

UYWidget_CurrentRankedSeasonTopPlayers::UYWidget_CurrentRankedSeasonTopPlayers() {
    this->m_amountofTopPlayersToShow = 10;
    this->m_matchmakeGameModeType = EYMatchmakeGameModeType::NONE;
}

bool UYWidget_CurrentRankedSeasonTopPlayers::CheckAndLogIfStringIsEmpty(const FString& Str) {
    return false;
}



