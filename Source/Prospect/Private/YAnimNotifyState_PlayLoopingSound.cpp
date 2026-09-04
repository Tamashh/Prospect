#include "YAnimNotifyState_PlayLoopingSound.h"

UYAnimNotifyState_PlayLoopingSound::UYAnimNotifyState_PlayLoopingSound() {
    this->m_sound = NULL;
    this->m_fadeOutTime = 0.0f;
    this->m_cachedAudioComponent = NULL;
}


