#include "YWidget_ItemComponentModEntry.h"

UYWidget_ItemComponentModEntry::UYWidget_ItemComponentModEntry() {
    this->m_setItemContainerWidget = NULL;
    this->m_emptyItemContainerWidget = NULL;
    this->m_modTypeText = NULL;
    this->m_modType = EYModificationSlotType::None;
    this->m_modSlotIdx = 0;
}

void UYWidget_ItemComponentModEntry::HandleInternalItemClicked(UYWidget_ItemContainer* itemWidget) {
}



