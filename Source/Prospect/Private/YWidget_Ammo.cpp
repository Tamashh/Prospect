#include "YWidget_Ammo.h"

UYWidget_Ammo::UYWidget_Ammo() {
    this->m_ammoText = NULL;
    this->m_activeWeaponText = NULL;
    this->m_activeWeaponRow = NULL;
    this->m_weaponControllerRuntimeComponent = NULL;
}

void UYWidget_Ammo::OnPlayerStateSet(APlayerState* State) {
}

void UYWidget_Ammo::OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& inventoryItem, EYPlayerSetType equippedPlayerSetType) {
}

void UYWidget_Ammo::OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle) {
}



