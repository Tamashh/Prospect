#include "YMissionVOData.h"

FYMissionVOData::FYMissionVOData() {
    this->m_playContext = EYMissionVOPlayContext::StationOnly;
    this->m_delayVoiceOverUntilScreensAreClosed = false;
}
