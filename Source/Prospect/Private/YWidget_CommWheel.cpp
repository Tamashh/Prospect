#include "YWidget_CommWheel.h"

UYWidget_CommWheel::UYWidget_CommWheel() {
    this->m_activeWheelType = EYWheelType::None;
    this->m_distanceFromCenter = 300.0f;
    this->m_deadZoneCenter = 50.0f;
    this->m_listenToWheelInputComponent = true;
    this->m_commWheelItemsPanel = NULL;
    this->m_selectorWidget = NULL;
    this->m_commWheelItemWidgetClass = NULL;
    this->m_separatorWidgetClass = NULL;
    this->m_centralWheelItem = NULL;
    this->m_selectedWheelItem = NULL;
    this->m_socialComponent = NULL;
}

void UYWidget_CommWheel::SetSelectedItem(UYWidget_CommWheelItem* Item, bool PlaySound) {
}

void UYWidget_CommWheel::OpenCommWheel(EYWheelType wheelItemType) {
}

void UYWidget_CommWheel::OnItemMouseHoveredOverStateChanged(UYWidget_CommWheelItem* Item, bool isMouseOver) {
}

void UYWidget_CommWheel::CloseSpecificCommWheelButTryPlaySelectedtem(EYWheelType Type) {
}

void UYWidget_CommWheel::CloseCommWheelButTryPlaySelectedtem() {
}

void UYWidget_CommWheel::CloseCommWheel() {
}









