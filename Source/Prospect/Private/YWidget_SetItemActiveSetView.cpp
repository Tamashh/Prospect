#include "YWidget_SetItemActiveSetView.h"

UYWidget_SetItemActiveSetView::UYWidget_SetItemActiveSetView() {
    this->m_pistolSlot = NULL;
    this->m_weaponOneSlot = NULL;
    this->m_weaponTwoSlot = NULL;
    this->m_toolOneSlot = NULL;
    this->m_toolTwoSlot = NULL;
    this->m_abilityOneSlot = NULL;
    this->m_abilityTwoSlot = NULL;
    this->m_bagSlot = NULL;
    this->m_helmetSlot = NULL;
    this->m_selectedItem = NULL;
    this->m_slotType = EYPlayerSetType::None;
}

void UYWidget_SetItemActiveSetView::SetInventorySlotItem(UYWidget_SetItem* SetItem, const FYInventoryItem& inventoryItem, EYPlayerSetType playerSetType) {
}

void UYWidget_SetItemActiveSetView::OnInventoryItemUnhovered() {
}

void UYWidget_SetItemActiveSetView::OnInventoryItemHovered(FYInventoryItem hoveredItem) {
}

void UYWidget_SetItemActiveSetView::OnInventoryItemDragDetected(UYWidget_ItemContainer* itemWidget, bool isDragging, UDragDropOperation* DragDropOperation) {
}

void UYWidget_SetItemActiveSetView::OnInventoryItemDetail(FYInventoryItem Item) {
}

void UYWidget_SetItemActiveSetView::OnInventoryItemClicked(UYWidget_ItemContainer* setItemWidget, FYInventoryItem Item, EYPlayerSetType setType) {
}

UYWidget_SetItem* UYWidget_SetItemActiveSetView::GetSetItemSlotForType(EYPlayerSetType itemSetType) const {
    return NULL;
}









