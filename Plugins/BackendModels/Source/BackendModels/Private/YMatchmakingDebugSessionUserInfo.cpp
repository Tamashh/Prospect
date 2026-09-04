#include "YMatchmakingDebugSessionUserInfo.h"

FYMatchmakingDebugSessionUserInfo::FYMatchmakingDebugSessionUserInfo() {
    this->playersCount = 0;
    this->allowsJoinDueToStorm = false;
    this->beginnerMode = EYMatchmakingBeginnerMode::None;
    this->isShieldedSession = false;
    this->bracketIdx = 0;
    this->transitionTime = 0LL;
}

