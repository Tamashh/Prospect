#include "YMutingState.h"

FYMutingState::FYMutingState() {
    this->m_isMuted = false;
    this->m_durationMuted = 0.0f;
    this->m_timeStartedMuted = 0.0f;
    this->m_amountOfTimeMuted = 0;
    this->m_reason = EYMuteReason::INAPROPRIATE_LANGUAGE;
}

