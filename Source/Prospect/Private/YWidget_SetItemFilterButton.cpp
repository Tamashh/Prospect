#include "YWidget_SetItemFilterButton.h"

UYWidget_SetItemFilterButton::UYWidget_SetItemFilterButton() {
    this->m_typeToShow = EYItemType::None;
    this->m_showItemAmount = true;
}

void UYWidget_SetItemFilterButton::OnPlayerStateSet(APlayerState* State) {
}

void UYWidget_SetItemFilterButton::OnInventoryUpdate(UYStateInventoryComponent* stateInventoryComponent) {
}




