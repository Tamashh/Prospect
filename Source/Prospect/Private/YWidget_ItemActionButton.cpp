#include "YWidget_ItemActionButton.h"

UYWidget_ItemActionButton::UYWidget_ItemActionButton() {
    this->m_itemActionButton = NULL;
    this->m_itemActionButtonText = NULL;
    this->m_itemActionType = EYItemActionType::None;
    this->m_deactivatedButtonStyleAsset = NULL;
    this->m_neutralButtonStyleAsset = NULL;
    this->m_dangerButtonStyleAsset = NULL;
    this->m_highlightButtonStyleAsset = NULL;
}

void UYWidget_ItemActionButton::SetTextByActionType(EYItemActionType actionType) {
}

void UYWidget_ItemActionButton::HandleButtonClicked() {
}


