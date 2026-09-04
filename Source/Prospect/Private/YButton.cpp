#include "YButton.h"

UYButton::UYButton() {
    this->m_buttonStyleAsset = NULL;
    this->m_buttonIsSelectedStyleAsset = NULL;
    this->m_currentlyUsedStyleAsset = NULL;
}

void UYButton::SetSelectionState(bool NewIsSelected) {
}

void UYButton::SetButtonStyleAsset(USlateWidgetStyleAsset* NewStyle) {
}

bool UYButton::IsSelected() const {
    return false;
}

void UYButton::HandleUnhovered() {
}

void UYButton::HandleReleased() {
}

void UYButton::HandlePressed() {
}

void UYButton::HandleHovered() {
}

void UYButton::HandleClicked() {
}


