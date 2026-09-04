#include "YEnterMatchmakingResult.h"

FYEnterMatchmakingResult::FYEnterMatchmakingResult() {
    this->success = false;
    this->blocker = EYMatchmakingBlocker::None;
    this->singleplayerStation = false;
    this->isMatchTravel = false;
    this->numAttempts = 0;
}

