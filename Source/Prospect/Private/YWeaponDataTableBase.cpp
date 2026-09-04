#include "YWeaponDataTableBase.h"

FYWeaponDataTableBase::FYWeaponDataTableBase() {
    this->m_customizationCameraCategory = EYCustomizationCategory::Invalid;
    this->m_pivottOffsetXDistance = 0.0f;
    this->m_defaultScopeOffset = 0.0f;
    this->m_deviceCategory = EYDeviceCategory::AssaultRifle;
    this->m_weaponTargetingFOV = 0.0f;
    this->m_fireAnimationIsLooping = false;
    this->m_stopFireAnimationWhenInterrupted = false;
    this->m_hideNormalCrosshairWhenTargeting = false;
    this->m_showFullscreenCrosshairWhenTargeting = false;
    this->m_alwaysHideCrosshair = false;
    this->m_fireWeaponFromMuzzleLocation = false;
    this->m_forceFireWeaponFromCameraLocationWhenADSing = false;
    this->m_hideGunWhenFinishedTargeting = false;
    this->m_canUseTargeting = false;
    this->m_ignoreForAutomationTest = false;
    this->m_updateBeamFXEveryFrame = false;
    this->m_vfxWeaponType = EYVFX_WeaponType::None;
    this->m_useSpinUpPercentMaterialParameter = false;
    this->m_animationPose = EYEquipedWeaponPoseType::Invalid;
    this->m_animationWeaponType = EYEquipedAnimationWeaponType::Invalid;
    this->m_blockAllWeaponInput = false;
    this->m_useAnimSections = false;
    this->m_ScriptableComponent = NULL;
    this->m_spawnComponentOnClients = false;
    this->m_spawnOnCharacter = false;
    this->m_useSwitchModeInsteadOfTargeting = false;
}

