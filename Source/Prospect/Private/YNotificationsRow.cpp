#include "YNotificationsRow.h"

FYNotificationsRow::FYNotificationsRow() {
    this->m_priority = EYNotificationsPriority::None;
    this->m_category = EYNotificationsCategory::None;
    this->m_displayType = EYNotificationsDisplayType::None;
    this->m_timeToLive = 0.0f;
    this->m_centerNotificationTimeToLive = 0.0f;
    this->m_controller = NULL;
}

