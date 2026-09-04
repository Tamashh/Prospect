#include "YRequestServerSessionStateResult.h"

FYRequestServerSessionStateResult::FYRequestServerSessionStateResult() {
    this->retryCounter = 0;
    this->canGoToSession = false;
    this->shouldCancel = false;
}

