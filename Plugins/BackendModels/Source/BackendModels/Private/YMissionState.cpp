#include "YMissionState.h"

FYMissionState::FYMissionState() {
    this->Count = 0;
    this->Completed = false;
    this->IsActive = false;
    this->acknowledged = false;
    this->receivedReward = false;
}

