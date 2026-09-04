#include "YWidget_ItemDetailOverview.h"

UYWidget_ItemDetailOverview::UYWidget_ItemDetailOverview() {
    this->m_itemDetailWidget = NULL;
    this->m_blueprintDetailWidget = NULL;
    this->m_isRequestingCustomizationModeChanges = true;
}

void UYWidget_ItemDetailOverview::OnInventoryUpdated(const TArray<FYInventoryItem>& inventoryItems) {
}

void UYWidget_ItemDetailOverview::HandleVanitySelected(UYWidget_ItemContainer* selectedVanity) {
}

void UYWidget_ItemDetailOverview::HandleEquipButtonClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_ItemDetailOverview::HandleBackButtonWidgetClicked() {
}


