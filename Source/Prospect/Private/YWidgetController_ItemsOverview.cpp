#include "YWidgetController_ItemsOverview.h"

UYWidgetController_ItemsOverview::UYWidgetController_ItemsOverview() {
    this->m_cachedSelectedItemContainer = NULL;
}

void UYWidgetController_ItemsOverview::OnUnlockedBlueprintsUpdated(const TArray<FName>& unlockedBlueprints) {
}

void UYWidgetController_ItemsOverview::OnLoreItemsUpdated(const TArray<FYLoreBackendItemInfo>& loreItems) {
}

void UYWidgetController_ItemsOverview::OnItemsRemoved(const FString& UserId, const TArray<FString>& removedItems) {
}

void UYWidgetController_ItemsOverview::OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items) {
}

void UYWidgetController_ItemsOverview::HandleSortingCriteriaRequested(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UYWidgetController_ItemsOverview::HandleItemModifyRequest(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidgetController_ItemsOverview::HandleItemHovered(UYWidget_ItemContainer* hoveredItem, bool Hovered) {
}

void UYWidgetController_ItemsOverview::HandleItemEquipRequest(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidgetController_ItemsOverview::HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidgetController_ItemsOverview::HandleItemClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidgetController_ItemsOverview::HandleFilterSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UYWidgetController_ItemsOverview::HandleCategorySelected(EYItemType selectedCategory, EYDeviceClass deviceClass, EYMiscellaneousType miscType, EYVanityType vanityType) {
}


