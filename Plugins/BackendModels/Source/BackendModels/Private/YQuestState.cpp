#include "YQuestState.h"

FYQuestState::FYQuestState() {
    this->Completed = false;
    this->Count = 0;
    this->Type = EYMetaMissionType::Mission;
    this->remainingUnits = 0;
}

