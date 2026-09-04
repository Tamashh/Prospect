#include "YDialogContainer.h"

UYDialogContainer::UYDialogContainer() {
    this->m_modalDialogOkCancelItem = NULL;
    this->m_notificationWidget = NULL;
    this->m_shopOfferPurchaseModalDialog = NULL;
    this->m_exitGameModalDialog = NULL;
    this->m_connectionLostWidget = NULL;
    this->m_reportType = EYReportType::None;
    this->m_connectionTimerIntervalSeconds = 5.0f;
}

void UYDialogContainer::ShowPlayerSupportWidget(bool newState) {
}

void UYDialogContainer::ShowLoadingOverlay(const FText& Message) {
}

void UYDialogContainer::OnShowPlayerDialogSupportMessage(const FText headline, const FText Message, const FText buttonText) {
}

void UYDialogContainer::InitializeNewsScreen() {
}

void UYDialogContainer::HideLoadingOverlay() {
}

void UYDialogContainer::HandleConnectionRestored(EYLoginResult loginResult) {
}

void UYDialogContainer::HandleConnectionLost() {
}











bool UYDialogContainer::BP_CloseDialogContainers_Implementation() {
    return false;
}


