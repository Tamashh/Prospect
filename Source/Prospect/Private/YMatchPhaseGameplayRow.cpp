#include "YMatchPhaseGameplayRow.h"

FYMatchPhaseGameplayRow::FYMatchPhaseGameplayRow() {
    this->m_isStormActive = false;
    this->m_cycleSpikeSpawnProbability = 0.0f;
    this->m_isPlayerSpawningEnabled = false;
    this->m_isPlayerSpawningEnabledDelay = 0.0f;
    this->m_isEscapeActivityEnabled = false;
    this->m_isAIUsingStormLoot = false;
    this->m_useAIStormSquads = false;
    this->m_isStormMineralsActivityActive = false;
    this->m_isStormDepositActive = false;
    this->m_isPowerUpResetAllowed = false;
}

