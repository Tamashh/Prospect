#include "YGetSocialProfilesResult.h"

FYGetSocialProfilesResult::FYGetSocialProfilesResult() {
    this->Result = EYSocialRequestResult::OK;
    this->includePresence = false;
    this->requestHandle = 0;
}

