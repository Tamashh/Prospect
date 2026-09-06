#include "YUserSessionConnectionStateChange.h"

FYUserSessionConnectionStateChange::FYUserSessionConnectionStateChange() {
    this->m_stateChange = EYUserSessionConnectionState::Pending;
    this->m_playfabAckedState = EYUserSessionConnectionState::Pending;
}

