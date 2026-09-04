#include "YSearchSocialProfilesResult.h"

FYSearchSocialProfilesResult::FYSearchSocialProfilesResult() {
    this->Result = EYSocialRequestResult::OK;
    this->searchRequest = 0;
    this->includePresence = false;
}

