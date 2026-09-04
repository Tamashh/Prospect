#include "YPlayerFactionProgressionUIData.h"

FYPlayerFactionProgressionUIData::FYPlayerFactionProgressionUIData() {
    this->m_factionId = EYFaction::Invalid;
    this->m_factionLevel = 0;
    this->m_completeFactionReputation = 0;
    this->m_currentXpOfCurrentLevel = 0;
    this->m_maxXpRequiredForCurrentLevel = 0;
    this->m_relativeProgressBetweenCurrentLevelAndNextLevel = 0.0f;
}

