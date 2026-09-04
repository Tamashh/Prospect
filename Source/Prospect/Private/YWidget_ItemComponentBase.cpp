#include "YWidget_ItemComponentBase.h"

UYWidget_ItemComponentBase::UYWidget_ItemComponentBase() {
    this->m_parentItemContainer = NULL;
    this->m_showOnlyForItemsWithItemBackendIdSet = false;
    this->m_useOutsideOfItemContainer = false;
    this->m_removeFromHierarchy = true;
}

bool UYWidget_ItemComponentBase::ShouldComponentBeShown() const {
    return false;
}

bool UYWidget_ItemComponentBase::IsItemInstanceEqualToAssignedInventoryItem(const FYInventoryItem& Item) const {
    return false;
}

void UYWidget_ItemComponentBase::HandleSetItem() {
}

void UYWidget_ItemComponentBase::HandleResetItem() {
}

void UYWidget_ItemComponentBase::HandleItemSelected(UYWidget_ItemContainer* itemWidget) {
}

void UYWidget_ItemComponentBase::HandleItemReleased(UYWidget_ItemContainer* itemWidget) {
}

void UYWidget_ItemComponentBase::HandleItemPressed(UYWidget_ItemContainer* itemWidget) {
}

void UYWidget_ItemComponentBase::HandleItemHovered(UYWidget_ItemContainer* itemWidget, bool Hovered) {
}

void UYWidget_ItemComponentBase::HandleItemDrop(UYWidget_ItemContainer* itemWidget, UDragDropOperation* Operation) {
}

void UYWidget_ItemComponentBase::HandleItemDragDetected(UYWidget_ItemContainer* itemWidget, bool isDragging, UDragDropOperation* InOperation) {
}

void UYWidget_ItemComponentBase::HandleItemClicked(UYWidget_ItemContainer* itemWidget) {
}

void UYWidget_ItemComponentBase::HandleItemActiveChanged(UYWidget_ItemContainer* itemWidget, bool IsActive) {
}

FDataTableRowHandle UYWidget_ItemComponentBase::GetAssignedItemRowHandle() const {
    return FDataTableRowHandle{};
}

void UYWidget_ItemComponentBase::ForceTooltipUpdate() const {
}












