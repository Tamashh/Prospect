#include "YAudioManager.h"

UYAudioManager::UYAudioManager() {
    this->m_multiplierTransientMasterVolumeDucking = 0.800000012f;
    this->m_audioDataTablesToLoadAsync.AddDefaulted(4);
}


