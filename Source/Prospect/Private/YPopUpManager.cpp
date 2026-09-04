#include "YPopUpManager.h"

UYPopUpManager::UYPopUpManager() {
    this->m_dismissedPopups = NULL;
}

void UYPopUpManager::OnPopUpWidgetDismissed(const FName& popUpId) {
}

void UYPopUpManager::OnFinishedLoadingPopUpWidgets() {
}

UYPopUpManager* UYPopUpManager::Get(const UObject* WorldContext, EYGetErrorHandling errorHandling) {
    return NULL;
}


