#include "YWidget_ItemsOverview.h"

UYWidget_ItemsOverview::UYWidget_ItemsOverview() {
    this->m_itemsContainer = NULL;
    this->m_specialCraftingBlueprintsContainer = NULL;
    this->m_sortByComboBox = NULL;
    this->m_deviceCategoryFilterComboBox = NULL;
    this->m_miscCategoryFilterComboBox = NULL;
    this->m_factionsFilterComboBox = NULL;
    this->m_hideItems = false;
    this->m_hideBlueprints = false;
    this->m_itemCategoriesClass = NULL;
    this->m_selectedItem = NULL;
}

void UYWidget_ItemsOverview::HandleItemSelected(UYWidget_ItemContainer* SelectedItem) {
}

void UYWidget_ItemsOverview::HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem) {
}











