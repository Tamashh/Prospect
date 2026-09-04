#include "YChannelSettings.h"

FYChannelSettings::FYChannelSettings() {
    this->m_defaultHaveText = false;
    this->m_defaultHaveAudio = false;
    this->m_isGlobalChatChannel = false;
    this->m_switchToChannelOnAddIfDesired = false;
    this->m_alwaysSwitchToChannelOnAdd = false;
    this->m_shouldCacheMessagesIfNotConnected = false;
    this->m_amountOfAllowedMessagesGivenThreshold = 0;
    this->m_messagesSpamIntervalCheck = 0.0f;
}

