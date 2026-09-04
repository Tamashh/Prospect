#include "YWidget.h"

UYWidget::UYWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->m_controllerClass = NULL;
    this->m_shownVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_hiddenVisibility = ESlateVisibility::Collapsed;
    this->m_shouldOverrideRootZLayer = false;
    this->m_rootZLayerOverride = EYRootZLayer::Screens;
    this->m_controller = NULL;
    this->m_screenSystemRoot = NULL;
    this->m_shouldHandleInput = false;
}

bool UYWidget::TriggerEscMenu(bool forceEscapeMenu) {
    return false;
}

void UYWidget::ToggleVisibility() {
}

void UYWidget::SetPendingVisibility_Implementation(ESlateVisibility newPendingVisibility, bool atConstruct) {
}

void UYWidget::SetController(UYWidgetController* newController) {
}

void UYWidget::RefreshConstructData_Implementation() {
}

void UYWidget::OnAnimateVisibilityFinished() {
}

void UYWidget::HandleBackKey() {
}

ESlateVisibility UYWidget::GetPendingVisibility() const {
    return ESlateVisibility::Visible;
}

UYWidgetController* UYWidget::GetController() const {
    return NULL;
}



bool UYWidget::BP_HandleTabKey_Implementation() {
    return false;
}

bool UYWidget::BP_HandleConfirmInput_Implementation() {
    return false;
}

bool UYWidget::BP_HandleBackKey_Implementation() {
    return false;
}



UWidgetAnimation* UYWidget::AnimateVisibility(ESlateVisibility newVisibility) {
    return NULL;
}

void UYWidget::ActivateInputForUmg(bool isActivate, UYWidget* focusedWidget, bool isUIOnly) {
}


