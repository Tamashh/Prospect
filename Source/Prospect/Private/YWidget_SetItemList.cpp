#include "YWidget_SetItemList.h"

UYWidget_SetItemList::UYWidget_SetItemList() {
    this->m_sendInventoryUpdateOnDestruct = true;
    this->m_scrollGrid = NULL;
    this->m_inventoryWidgetsInitialized = false;
    this->m_maxItemToLoad = 3;
}

void UYWidget_SetItemList::UpdateBackendData() {
}

void UYWidget_SetItemList::RefreshSorting() {
}

void UYWidget_SetItemList::OnPlayerStateSet(APlayerState* State) {
}

void UYWidget_SetItemList::OnInventoryUpdate(UYStateInventoryComponent* stateInventoryComponent) {
}
