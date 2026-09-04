#include "YWidget_Login.h"

UYWidget_Login::UYWidget_Login() {
    this->m_passwordTextBox = NULL;
    this->m_usernameTextBox = NULL;
    this->m_loginButton = NULL;
    this->m_registerButton = NULL;
    this->m_resetPasswordButton = NULL;
    this->m_errorTextBlock = NULL;
}

void UYWidget_Login::HandleTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UYWidget_Login::HandleResetPasswordClicked() {
}

void UYWidget_Login::HandleRegisterClicked() {
}

void UYWidget_Login::HandleLoginClicked() {
}


