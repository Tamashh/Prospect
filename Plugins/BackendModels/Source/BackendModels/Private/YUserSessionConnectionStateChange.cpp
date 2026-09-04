#include "YUserSessionConnectionStateChange.h"

FYUserSessionConnectionStateChange::FYUserSessionConnectionStateChange() {
    this->m_stateChange = EYUserSessionConnectionState::None;
    this->m_playfabAckedState = EYUserSessionConnectionState::None;
}

