#include "YWidget_OnboardingOverlay.h"

UYWidget_OnboardingOverlay::UYWidget_OnboardingOverlay() {
    this->m_closeButton = NULL;
    this->m_backgroundBlur = NULL;
    this->m_BITimeWhenShown = 0;
    this->m_dismissedOverlays = NULL;
}

void UYWidget_OnboardingOverlay::OnCloseOverlay() {
}


