#include "YKeybindingsManager.h"

UYKeybindingsManager::UYKeybindingsManager() {
    this->m_model = NULL;
    this->m_oldInputSettingsCached = NULL;
    this->m_defaultInputSettingsCached = NULL;
}

void UYKeybindingsManager::SaveKeybindings() {
}

void UYKeybindingsManager::OnAnyKeyPressed(FKey Key) const {
}

UYKeybindingsModel* UYKeybindingsManager::GetModel() const {
    return NULL;
}

UYKeybindingsManager* UYKeybindingsManager::FindKeybindingsManager(const UObject* objCtx) {
    return NULL;
}


