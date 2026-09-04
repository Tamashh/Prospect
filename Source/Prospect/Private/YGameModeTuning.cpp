#include "YGameModeTuning.h"

FYGameModeTuning::FYGameModeTuning() {
    this->m_xpModificationOnGameplayTagsMultiplier = 0.0f;
    this->m_questVictoryConditionQuestList = 0;
    this->m_addQuestTimerDelay = 0.0f;
    this->m_amountOfHardQuests = 0;
    this->m_amountOfMediumQuests = 0;
    this->m_scoreSharingMultiplier = 0.0f;
    this->m_currencySharingMultiplier = 0.0f;
    this->m_xpSharingMultiplier = 0.0f;
    this->m_pactBreakInteractionTime = 0.0f;
    this->m_heatmapEnabled = false;
    this->m_ownPlayerHeatScore = 0.0f;
    this->m_pactMateHeatScore = 0.0f;
    this->m_nonPlayerHeatScore = 0.0f;
    this->m_playerHeatScore = 0.0f;
    this->m_vehicleHeatScore = 0.0f;
    this->m_recentlyDealtDamageScore = 0.0f;
    this->m_recentlyDealDamageHeatMapTimeSpan = 0.0f;
    this->m_sessionTimeoutCallbackRewards = 0.0f;
    this->m_sessionManagesResources = false;
    this->m_interactionMultiplier = 0.0f;
    this->m_interactionTraceSphere = 0.0f;
    this->m_checkRecursiveTrace = false;
    this->m_prioritizeNonPlayerCharacters = false;
    this->m_useSessionTimerShutdown = false;
    this->m_damageOutlineHostilePlayersDuration = 0.0f;
    this->m_DBNOCharges = 0;
}

