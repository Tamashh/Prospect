#include "YVictimCompensationSettings.h"

FYVictimCompensationSettings::FYVictimCompensationSettings() {
    this->m_killSnapshotCountLimit = 0;
    this->m_killSnapshotDaysLimit = 0;
    this->m_processVictimCompensationsDelayInHours = 0.0f;
    this->m_deathSnapshotDaysLimit = 0;
    this->m_deathSnapshotCountLimit = 0;
    this->m_itemsToCompensateCountLimit = 0;
    this->m_filterItemsInEndOfMatchSafePockets = false;
    this->m_enableDoubleCheaterProcessing = false;
}
