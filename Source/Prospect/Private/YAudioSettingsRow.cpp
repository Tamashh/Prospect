#include "YAudioSettingsRow.h"

FYAudioSettingsRow::FYAudioSettingsRow() {
    this->m_announcementInterruptSoundFadeoutTime = 0.0f;
    this->m_fallbackSoundDuration = 0.0f;
    this->m_minDurationAnnouncement = 0.0f;
    this->m_maxDurationAnnouncement = 0.0f;
    this->m_maxQueueTime = 0.0f;
    this->m_subtitleOcclusionCullingThreshold = 0.0f;
}

