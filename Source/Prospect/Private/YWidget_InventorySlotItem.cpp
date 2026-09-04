#include "YWidget_InventorySlotItem.h"

UYWidget_InventorySlotItem::UYWidget_InventorySlotItem() {
    this->m_indexWeaponInventorySlot = 0;
}



void UYWidget_InventorySlotItem::OnInventoryChanged() {
}

void UYWidget_InventorySlotItem::OnActiveWeaponChanged(FDataTableRowHandle rowHandle) {
}

void UYWidget_InventorySlotItem::HandleOnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle) {
}





