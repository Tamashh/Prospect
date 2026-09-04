#include "YWidget_VanityOverview.h"

UYWidget_VanityOverview::UYWidget_VanityOverview() {
    this->m_listSelection = NULL;
    this->m_categoriesPanel = NULL;
    this->m_vanityDescriptionText = NULL;
    this->m_setCameraForVanityItemOnCategoryHover = false;
    this->m_apperenceCategory = EYApperenceCategoriesTypes::Invalid;
    this->m_currentSelectedSlotId = 0;
}

void UYWidget_VanityOverview::SetVanitySelectionState(EYVanitySelectionState selectionState, bool resetVanity) {
}

void UYWidget_VanityOverview::OnVanityUpdated() {
}

void UYWidget_VanityOverview::OnVanityCategoryUpdated(const TArray<EYVanityType>& updatedVanityTypes) {
}

void UYWidget_VanityOverview::OnItemHovered(FYUpdateVanityData Data, bool hover) {
}

void UYWidget_VanityOverview::OnItemClicked(FYUpdateVanityData Data) {
}

void UYWidget_VanityOverview::OnCategoryHover(UYWidget_ItemContainer* itemContainer, bool Hovered) {
}

void UYWidget_VanityOverview::OnCategoryClicked(UYWidget_ItemContainer* itemContainer) {
}


