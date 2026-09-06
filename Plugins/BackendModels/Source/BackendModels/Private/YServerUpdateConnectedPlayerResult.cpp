#include "YServerUpdateConnectedPlayerResult.h"

FYServerUpdateConnectedPlayerResult::FYServerUpdateConnectedPlayerResult() {
    this->ConnectionState = EYUserSessionConnectionState::Pending;
    this->transactionSuccess = false;
    this->success = false;
}

