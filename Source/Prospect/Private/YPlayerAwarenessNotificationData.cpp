#include "YPlayerAwarenessNotificationData.h"

FYPlayerAwarenessNotificationData::FYPlayerAwarenessNotificationData() {
    this->m_isAuthorityTriggered = false;
    this->m_shouldPlayVo = false;
    this->m_shouldPlaySound = false;
    this->m_notficationType = EYPlayerAwarenessNotificationType::NONE;
}

