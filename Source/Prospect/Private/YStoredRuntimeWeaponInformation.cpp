#include "YStoredRuntimeWeaponInformation.h"

FYStoredRuntimeWeaponInformation::FYStoredRuntimeWeaponInformation() {
    this->m_rarityType = EYItemRarityType::Invalid;
    this->m_ammoInClip = 0;
    this->m_maxAmmo = 0;
    this->m_lastTimeFiresShot = 0.0f;
    this->m_weaponTransportHandle = 0;
    this->m_slotType = EYWeaponSlotType::Starter;
    this->m_zoomLevel = 0;
}

