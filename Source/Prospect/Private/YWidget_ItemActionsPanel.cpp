#include "YWidget_ItemActionsPanel.h"

UYWidget_ItemActionsPanel::UYWidget_ItemActionsPanel() {
    this->m_chooseEquipSlot = true;
    this->m_equipOnDoubleClick = false;
    this->m_craftOnDoubleClick = false;
    this->m_goToDetailsOnDoubleClick = false;
    this->m_concealSelectedItemName = false;
    this->m_selectedItemWidget = NULL;
    this->m_offerItemWidget = NULL;
    this->m_informationPanelsWidgetSwitcher = NULL;
    this->m_emptyWidgetSwitcherElement = NULL;
    this->m_selectItemWidgetSwitcherElement = NULL;
    this->m_itemNameWidgetSwitcherElement = NULL;
    this->m_itemNameAndCraftingPriceWidgetSwitcherElement = NULL;
    this->m_craftingInProgressWidgetSwitcherElement = NULL;
    this->m_craftingFinishedWidgetSwitcherElement = NULL;
    this->m_offerPurchaseWidgetSwitcherElement = NULL;
    this->m_audioComponentCraftingInProgress = NULL;
}

void UYWidget_ItemActionsPanel::OnShopUpdated() {
}

void UYWidget_ItemActionsPanel::OnPurchaseSuccessful() {
}

void UYWidget_ItemActionsPanel::OnLocalPlayerCurrenciesUpdated() {
}

void UYWidget_ItemActionsPanel::OnLeaveCurrentScreenConfirmed() {
}

void UYWidget_ItemActionsPanel::OnFactionProgressionUpdate(const TArray<FYFactionProgress>& factionProgress) {
}

void UYWidget_ItemActionsPanel::OnCurrencyUpdated(const FYCurrency& Currency) {
}

bool UYWidget_ItemActionsPanel::IsChooseEquipSlotMode() const {
    return false;
}

void UYWidget_ItemActionsPanel::InitializeButtons() {
}

void UYWidget_ItemActionsPanel::HandleSelectedItemDoubleClicked(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_ItemActionsPanel::HandleItemSelected(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_ItemActionsPanel::HandleItemActionButtonClicked(UYWidget_ItemActionButton* itemActionButton) {
}








