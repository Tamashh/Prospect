#include "YReplicatedRankData.h"

FYReplicatedRankData::FYReplicatedRankData() {
    this->m_rank = 0;
    this->m_prevRank = 0;
    this->m_unplaced = false;
    this->m_receivedBackendData = false;
}

