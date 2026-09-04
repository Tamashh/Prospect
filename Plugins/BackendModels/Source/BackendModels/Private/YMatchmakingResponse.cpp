#include "YMatchmakingResponse.h"

FYMatchmakingResponse::FYMatchmakingResponse() {
    this->Error = EYMatchmakingResult::OK;
    this->isRanked = false;
    this->estimatedTimeSeconds = 0;
}

