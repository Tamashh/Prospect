#include "YWidget_FullScreenCrosshairManager.h"

UYWidget_FullScreenCrosshairManager::UYWidget_FullScreenCrosshairManager() {
    this->m_fullscreenCrosshairWidget = NULL;
    this->m_fullscreenCrosshairPanel = NULL;
    this->m_weaponPlayerRuntimeComponent = NULL;
}

void UYWidget_FullScreenCrosshairManager::OnTargetingStopped(bool wasInterupted) {
}

void UYWidget_FullScreenCrosshairManager::OnStartedTargeting() {
}

void UYWidget_FullScreenCrosshairManager::OnReticleToggleChangedCallback(bool newState) {
}

void UYWidget_FullScreenCrosshairManager::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYWidget_FullScreenCrosshairManager::OnNewWeaponInitialized() {
}


