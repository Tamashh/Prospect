#include "YChannelProximityChatSettings.h"

FYChannelProximityChatSettings::FYChannelProximityChatSettings() {
    this->m_isProximityVoiceChatEnabled = false;
    this->m_audibleDistance = 0;
    this->m_conversationalDistance = 0;
    this->m_audioFadeIntensityByDistance = 0.0f;
    this->m_audioFadeModel = EYVivoxAudioFadeModel::None;
}

