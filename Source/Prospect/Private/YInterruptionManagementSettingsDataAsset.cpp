#include "YInterruptionManagementSettingsDataAsset.h"

UYInterruptionManagementSettingsDataAsset::UYInterruptionManagementSettingsDataAsset() {
    this->m_tickInterval = 1.0f;
    this->m_requiredMaxSavedMovesForWarning = 2;
    this->m_maxSavedMovesResetTime = 10.0f;
    this->m_requiredAzureTimeoutsForWarning = 3;
    this->m_timeToWaitBeforeForceToStation = 60.0f;
    this->m_timeToWaitBeforeForceToLogin = 45.0f;
    this->m_waitingForPlayerInitialization = 30.0f;
    this->m_minTimeBeforeTravelling = 30.0f;
    this->m_minTimeBeforeRetryingLogin = 30.0f;
}


