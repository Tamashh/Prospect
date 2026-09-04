#include "YFilterRuntimeSettings.h"

FYFilterRuntimeSettings::FYFilterRuntimeSettings() {
    this->m_modelState = EYCustomizationModelType::None;
    this->m_sortingRequest = EYSortingRequestType::None;
    this->m_sortAlphabetical = false;
    this->m_onlyShowReleasedItems = false;
    this->m_checkItemStates = false;
    this->m_onlyShowOwnedItems = false;
    this->m_onlyShowItemsWithoutOwnershipRequirement = false;
}

