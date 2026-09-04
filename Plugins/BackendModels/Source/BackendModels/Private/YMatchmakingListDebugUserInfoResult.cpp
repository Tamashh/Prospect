#include "YMatchmakingListDebugUserInfoResult.h"

FYMatchmakingListDebugUserInfoResult::FYMatchmakingListDebugUserInfoResult() {
    this->userNVR = 0;
    this->squadNVR = 0;
    this->userKDR = 0.0f;
    this->squadKDR = 0.0f;
    this->isBeginner = false;
    this->canGoToShieldedMatch = false;
    this->dataTableBeginnerFlagEnabled = false;
    this->featureToggleShieldedMatchmakingEnabled = false;
    this->featureToggleSpentMoneyThresholdEnabled = false;
    this->featureToggleSteamAccountStatusEnabled = false;
    this->featureToggleVeteranPointsEnabled = false;
}

