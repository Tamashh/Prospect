#include "YHealthDataTableRow.h"

FYHealthDataTableRow::FYHealthDataTableRow() {
    this->m_maxHealth = 0.0f;
    this->m_regenerationRate = 0.0f;
    this->m_regenerationDelay = 0.0f;
    this->m_degenerationRate = 0.0f;
    this->m_damageThresholdToRestartHealthRegenerationDelay = 0.0f;
    this->m_segments = 0;
}

