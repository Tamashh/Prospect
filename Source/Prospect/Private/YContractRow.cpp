#include "YContractRow.h"

FYContractRow::FYContractRow() {
    this->m_isEnabled = false;
    this->m_contractCompletedFactionReputationIncrease = 0;
    this->m_objectivesProgressProcessing = EYObjectivesProgressProcessing::Invalid;
    this->m_contractCost = 0;
    this->m_contractDifficulty = EYContractDifficulty::Invalid;
    this->m_isMainContract = false;
    this->m_isMainMissionChain = false;
}

