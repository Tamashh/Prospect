#include "YWidget_ItemComponentCraftingPrice.h"

UYWidget_ItemComponentCraftingPrice::UYWidget_ItemComponentCraftingPrice() {
    this->m_showCurrencies = true;
    this->m_useBackendData = true;
}

void UYWidget_ItemComponentCraftingPrice::OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items) {
}

void UYWidget_ItemComponentCraftingPrice::OnCurrenciesUpdated() {
}






