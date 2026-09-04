#include "YPerformanceTuningRow.h"

FYPerformanceTuningRow::FYPerformanceTuningRow() {
    this->m_maxNumActivePowerIkOnAIs = 0;
    this->m_maxServerTickRate = 0;
    this->m_playerUpdateFrequency = 0;
    this->m_serverGCInterval = 0.0f;
    this->m_serverGCBudget = 0.0f;
    this->m_clientGCInterval = 0.0f;
    this->m_clientGCBudget = 0.0f;
    this->m_initialAsyncLevelStreamingTimeout = 0.0f;
    this->m_initialPriorityAsyncLoadingExtraTime = 0.0f;
    this->m_initialPriorityLevelStreamingActorsUpdateExtraTime = 0.0f;
}

