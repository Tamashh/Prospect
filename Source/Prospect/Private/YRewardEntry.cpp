#include "YRewardEntry.h"

FYRewardEntry::FYRewardEntry() {
    this->m_rewardType = EYRewardType::None;
    this->m_rewardSource = EYPlayerRewardSource::IN_GAME;
    this->m_amount = 0;
    this->m_fromAmount = 0;
}

