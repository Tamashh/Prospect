#include "YWidget_ModalDialogShopOfferPurchase.h"

UYWidget_ModalDialogShopOfferPurchase::UYWidget_ModalDialogShopOfferPurchase() {
    this->m_modalDialog = NULL;
    this->m_currentOfferPurchaseDialogState = EYShopOfferPurchaseDialogState::AskingForConfirmation;
    this->m_quantityEditableTextBox = NULL;
    this->m_quantityUpButton = NULL;
    this->m_quantityDownButton = NULL;
    this->m_unavailableReason = NULL;
    this->m_priceWidget = NULL;
    this->m_maxAllowedQuantity = 25;
}

void UYWidget_ModalDialogShopOfferPurchase::SetPurchaseOfferResult(const FText& resultCode, bool purchaseSuccessful) {
}

void UYWidget_ModalDialogShopOfferPurchase::OnQuantityUpButtonClicked() {
}

void UYWidget_ModalDialogShopOfferPurchase::OnQuantityTextChanged(const FText& Text) {
}

void UYWidget_ModalDialogShopOfferPurchase::OnQuantityDownButtonClicked() {
}

void UYWidget_ModalDialogShopOfferPurchase::OnPurchaseSuccessfulAnimationFinished() {
}

void UYWidget_ModalDialogShopOfferPurchase::OnOfferPurchaseTimedOut() {
}

void UYWidget_ModalDialogShopOfferPurchase::OnOfferPurchaseResponse(const FYShopOffer& offer, EYPurchaseOfferResult purchaseOfferResult) {
}






