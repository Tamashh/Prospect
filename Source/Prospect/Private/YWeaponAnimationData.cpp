#include "YWeaponAnimationData.h"

FYWeaponAnimationData::FYWeaponAnimationData() {
    this->m_weaponAnimation = NULL;
    this->m_weaponAnimationThirdPerson = NULL;
    this->m_playerAnimationFirstPerson = NULL;
    this->m_playerAnimationThirdPerson = NULL;
    this->m_desiredTuningPlayDuration = 0.0f;
    this->m_animationRateScaleOverride = 0.0f;
}

