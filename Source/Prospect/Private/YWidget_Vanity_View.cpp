#include "YWidget_Vanity_View.h"

UYWidget_Vanity_View::UYWidget_Vanity_View() {
    this->m_lastViewOption = EYVanityViewDialogOptions::None;
}

bool UYWidget_Vanity_View::ShowModalDialog(EYVanityViewDialogOptions Type) {
    return false;
}

void UYWidget_Vanity_View::OnKeepChanged() {
}

void UYWidget_Vanity_View::OnCancelCustomization() {
}

void UYWidget_Vanity_View::OnAcceptDisregardChanges() {
}

void UYWidget_Vanity_View::OnAcceptCustomization() {
}

bool UYWidget_Vanity_View::CancelActiveModalDialog() {
    return false;
}




