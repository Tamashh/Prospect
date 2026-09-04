#include "YUpdateReadStateResponse.h"

FYUpdateReadStateResponse::FYUpdateReadStateResponse() {
    this->returnResult = EYUpdateReadStateResult::OK;
    this->hasRead = false;
}

