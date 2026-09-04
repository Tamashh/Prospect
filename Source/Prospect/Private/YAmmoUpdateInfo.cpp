#include "YAmmoUpdateInfo.h"

FYAmmoUpdateInfo::FYAmmoUpdateInfo() {
    this->m_ammoLeftInCurrentClip = 0;
    this->m_ammoPercent = 0.0f;
    this->m_maxAmmo = 0;
    this->m_isAmmoChangeAnIncrement = false;
    this->m_ammoLeftOutsideOfCurrentClip = 0;
    this->m_haveInfiniteClip = false;
    this->m_runtimeWeaponComponent = NULL;
}

