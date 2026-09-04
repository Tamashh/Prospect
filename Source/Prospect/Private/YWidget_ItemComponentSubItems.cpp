#include "YWidget_ItemComponentSubItems.h"

UYWidget_ItemComponentSubItems::UYWidget_ItemComponentSubItems() {
    this->m_itemListPanelWidget = NULL;
    this->m_itemEntryWidget = NULL;
    this->m_exclusiveItemTypeOfSubItems = EYItemType::None;
    this->m_exclusiveVanityTypeOfSubItems = EYVanityType::None;
    this->m_panelWidget = NULL;
    this->m_forceSelectFirtEntry = false;
    this->m_cachedSelectedItemContainer = NULL;
    this->m_createdShopItemCount = 0;
}

void UYWidget_ItemComponentSubItems::ToggleVisibilityOfInventoryItems(bool visibile) {
}

void UYWidget_ItemComponentSubItems::HandleSubItemHovered(UYWidget_ItemContainer* itemSelected, bool Hovered) {
}

void UYWidget_ItemComponentSubItems::HandleSubItemEquip(UYWidget_ItemContainer* itemSelected) {
}

void UYWidget_ItemComponentSubItems::HandleSubItemClicked(UYWidget_ItemContainer* itemSelected) {
}

EYModificationSlotType UYWidget_ItemComponentSubItems::GetCurrentModificationSlotType() {
    return EYModificationSlotType::None;
}

int32 UYWidget_ItemComponentSubItems::GetCreatedShopItemsCount() const {
    return 0;
}



void UYWidget_ItemComponentSubItems::ApplyModSlotTypeFilter(EYModificationSlotType modSlotType) {
}


