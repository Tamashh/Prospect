#include "YServerPerformanceData.h"

FYServerPerformanceData::FYServerPerformanceData() {
    this->m_frameTime = 0.0f;
    this->m_idleTime = 0.0f;
    this->m_frameTimeHighest = 0.0f;
    this->m_memory = 0;
    this->m_memoryHighest = 0;
    this->m_numPlayers = 0;
    this->m_numActivePlayers = 0;
    this->m_numAIs = 0;
    this->m_serverLifetime = 0.0f;
    this->m_inPacketLoss = 0;
    this->m_outPacketLoss = 0;
    this->m_inBytesPerSecond = 0;
    this->m_outBytesPerSecond = 0;
}

