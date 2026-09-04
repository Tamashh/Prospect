#include "YWidget_VanityCategoryListSelection.h"

UYWidget_VanityCategoryListSelection::UYWidget_VanityCategoryListSelection() {
    this->m_activeCategory = EYVanityType::None;
    this->m_panel = NULL;
    this->m_headline = NULL;
    this->m_customizationEntryClass = NULL;
    this->m_containEmptyItem = false;
}

void UYWidget_VanityCategoryListSelection::OnEntryItemHovered(UYWidget_ItemContainer* container, bool hover) {
}

void UYWidget_VanityCategoryListSelection::OnEntryItemClicked(UYWidget_ItemContainer* container) {
}


