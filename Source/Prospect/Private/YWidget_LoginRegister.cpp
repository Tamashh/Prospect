#include "YWidget_LoginRegister.h"

UYWidget_LoginRegister::UYWidget_LoginRegister() {
    this->m_invalidGameLaunchWidget = NULL;
    this->m_loadingWidget = NULL;
    this->m_loginWidget = NULL;
    this->m_registerWidget = NULL;
    this->m_animateInAnimation = NULL;
    this->m_animateOutAnimation = NULL;
}

void UYWidget_LoginRegister::OnAnimateOutFinished() {
}

void UYWidget_LoginRegister::OnAnimateInFinished() {
}

void UYWidget_LoginRegister::HandleRegisterWidgetGoBackRequest() {
}

void UYWidget_LoginRegister::HandleLoginWidgetOnRegister() {
}

UYWidget_Register* UYWidget_LoginRegister::GetRegisterWidget() const {
    return NULL;
}

UYWidget_Login* UYWidget_LoginRegister::GetLoginWidget() const {
    return NULL;
}

UWidget* UYWidget_LoginRegister::GetLoadingWidget() const {
    return NULL;
}



