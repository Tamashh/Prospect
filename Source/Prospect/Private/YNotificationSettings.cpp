#include "YNotificationSettings.h"

UYNotificationSettings::UYNotificationSettings() {
    this->m_maximumAmountOfNotifications = 5;
    this->m_maxNumbersToTrackRecentlyPlayed = 60;
    this->m_shrinkNumberRecentlyPlayed = 30;
    this->m_minAllowedNewSearchTimeThreshold = 3.0f;
}


