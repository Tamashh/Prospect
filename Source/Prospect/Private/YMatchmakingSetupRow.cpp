#include "YMatchmakingSetupRow.h"

FYMatchmakingSetupRow::FYMatchmakingSetupRow() {
    this->maxPlayersPerStationShard = 0;
    this->maxServersToCreatePerUpdate = 0;
    this->pendingMatchmakingRequestTimeoutTime = 0;
    this->removeSessionsNotInPlayfab = false;
    this->sessionIntegrityCheckCooldownSeconds = 0;
}

