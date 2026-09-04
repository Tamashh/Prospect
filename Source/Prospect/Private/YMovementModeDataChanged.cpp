#include "YMovementModeDataChanged.h"

FYMovementModeDataChanged::FYMovementModeDataChanged() {
    this->m_newMovementMode = MOVE_None;
    this->m_oldMovementMode = MOVE_None;
    this->m_timeSinceMovementModeChanged = 0.0f;
}

