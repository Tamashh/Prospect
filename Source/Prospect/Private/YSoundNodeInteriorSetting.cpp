#include "YSoundNodeInteriorSetting.h"

UYSoundNodeInteriorSetting::UYSoundNodeInteriorSetting() {
    this->m_previewIsInInterior = false;
    this->m_alwaysUseInterior = false;
    this->m_interiorTransitionTime = 0.5f;
    this->m_hasCalculatedInitialValueParameterName = TEXT("HasCalculatedInteriorValue");
}


