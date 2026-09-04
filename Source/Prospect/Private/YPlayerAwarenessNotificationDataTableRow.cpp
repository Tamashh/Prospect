#include "YPlayerAwarenessNotificationDataTableRow.h"

FYPlayerAwarenessNotificationDataTableRow::FYPlayerAwarenessNotificationDataTableRow() {
    this->m_ignoreLocallyControlled = false;
    this->m_notficationType = EYPlayerAwarenessNotificationType::NONE;
    this->m_shouldPlayVo = false;
    this->m_shouldPlaySound = false;
    this->m_notificationCooldown = 0.0f;
}

