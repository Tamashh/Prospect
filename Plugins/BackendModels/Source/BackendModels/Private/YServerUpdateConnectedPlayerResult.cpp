#include "YServerUpdateConnectedPlayerResult.h"

FYServerUpdateConnectedPlayerResult::FYServerUpdateConnectedPlayerResult() {
    this->ConnectionState = EYUserSessionConnectionState::None;
    this->transactionSuccess = false;
    this->success = false;
}

