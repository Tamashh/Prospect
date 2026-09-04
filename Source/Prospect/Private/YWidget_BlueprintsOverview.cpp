#include "YWidget_BlueprintsOverview.h"

UYWidget_BlueprintsOverview::UYWidget_BlueprintsOverview() {
    this->m_blueprintEntryWBP = NULL;
    this->m_onlyBlueprints = false;
    this->m_itemTypeFilter = EYItemType::All;
}

void UYWidget_BlueprintsOverview::SetShop(const FName& shopId) {
}

void UYWidget_BlueprintsOverview::OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items) {
}

void UYWidget_BlueprintsOverview::InitShopForBlueprintsOverview(const FName& shopId) {
}

void UYWidget_BlueprintsOverview::HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_BlueprintsOverview::HandleItemClicked(UYWidget_ItemContainer* SelectedItem) {
}




