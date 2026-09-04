#include "YWidget_ItemComponentTextAmount.h"

UYWidget_ItemComponentTextAmount::UYWidget_ItemComponentTextAmount() {
    this->m_amount = 0;
    this->m_useBackendData = true;
    this->m_useMinThreshold = false;
    this->m_minAmountThresholdToShowWidget = 2;
}

void UYWidget_ItemComponentTextAmount::SetAmountText(const FText& newAmountText) {
}

void UYWidget_ItemComponentTextAmount::SetAmountInternal(int32 Amount) {
}

void UYWidget_ItemComponentTextAmount::OnPlayerStashItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item) {
}

void UYWidget_ItemComponentTextAmount::OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYWidget_ItemComponentTextAmount::OnPlayerSetItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYWidget_ItemComponentTextAmount::OnInventoryUpdate(UYStateInventoryComponent* inventoryComponent) {
}

void UYWidget_ItemComponentTextAmount::OnCurrenciesUpdated() {
}



