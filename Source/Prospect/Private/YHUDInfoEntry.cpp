#include "YHUDInfoEntry.h"

FYHUDInfoEntry::FYHUDInfoEntry() {
    this->Category = EYHUDInfoPriorityCategory::None;
    this->messageState = EYHUDInfoMessageState::None;
    this->Priority = 0;
}

