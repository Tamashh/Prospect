#include "YOutpostFriendInfo.h"

FYOutpostFriendInfo::FYOutpostFriendInfo() {
    this->m_onlineStatus = EYFriendOnlineStatus::None;
    this->m_memberState = EYUserState::IN_STATION;
    this->m_friendState = EYFriendState::NONE;
    this->m_squadSize = 0;
    this->m_isInLocalPlayerSquad = false;
}

