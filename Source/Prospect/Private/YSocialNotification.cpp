#include "YSocialNotification.h"

FYSocialNotification::FYSocialNotification() {
    this->m_type = EYNotifcationType::None;
    this->m_messageType = EYNotificationMessageType::None;
    this->m_isPermanent = false;
}

