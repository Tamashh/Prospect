#include "YVOAudioDatatableRow.h"

FYVOAudioDatatableRow::FYVOAudioDatatableRow() {
    this->m_rowType = EYVoRowType::Regular;
    this->m_requiresSubtitles = false;
    this->m_cooldownDuration = 0.0f;
    this->m_allowedToQueueSound = false;
    this->m_debugDisable = false;
}

