#include "YWidget_PlayerDetail.h"

UYWidget_PlayerDetail::UYWidget_PlayerDetail() {
    this->m_playerName = NULL;
    this->m_rankTextBlock = NULL;
}

void UYWidget_PlayerDetail::OnPlayerRankInitialized(const FYReplicatedRankData& rankedData) {
}



