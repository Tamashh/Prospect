#include "YWidget_RebindKeys.h"

UYWidget_RebindKeys::UYWidget_RebindKeys() {
    this->m_restoreHotkeysButton = NULL;
    this->m_inputSelectorWidgetClass = NULL;
    this->m_keySelectorPanel = NULL;
}

void UYWidget_RebindKeys::TriggerResetHotkeys() {
}

void UYWidget_RebindKeys::RevertPendingBindings() {
}

void UYWidget_RebindKeys::OnHotkeysRestored() {
}

void UYWidget_RebindKeys::OnHotkeysResaved() {
}

void UYWidget_RebindKeys::HandleKeyUnassigned(UYInputKeySelector* selector) {
}

void UYWidget_RebindKeys::ApplyPendingBindings() {
}


