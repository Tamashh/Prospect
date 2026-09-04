#include "YFortunaPassAction.h"

FYFortunaPassAction::FYFortunaPassAction() {
    this->m_isEnabled = false;
    this->m_actionType = EYActionType::Invalid;
    this->m_seasonGrantedXP = 0;
    this->m_dailyCapXP = 0;
    this->m_xpGrantFrequency = 0;
}

