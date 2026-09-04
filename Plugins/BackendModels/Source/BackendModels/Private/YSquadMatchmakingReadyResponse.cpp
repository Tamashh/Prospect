#include "YSquadMatchmakingReadyResponse.h"

FYSquadMatchmakingReadyResponse::FYSquadMatchmakingReadyResponse() {
    this->Result = EYSquadActionResult::OK;
    this->isSquadReadyForMatch = false;
}

