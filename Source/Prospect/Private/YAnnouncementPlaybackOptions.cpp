#include "YAnnouncementPlaybackOptions.h"

FYAnnouncementPlaybackOptions::FYAnnouncementPlaybackOptions() {
    this->m_announcementType = EYAnnouncementType::Play2D;
    this->m_speakerPlayerState = NULL;
    this->m_resolveVORowByContext = false;
    this->m_shouldHideAnnouncementWidget = false;
}

