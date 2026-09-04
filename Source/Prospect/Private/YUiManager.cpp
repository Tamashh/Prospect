#include "YUiManager.h"
#include "Templates/SubclassOf.h"

UYUiManager::UYUiManager() {
    this->m_itemTooltipWidget = NULL;
}

UYUiManager* UYUiManager::FindUiManager(const UObject* objCtx) {
    return NULL;
}

UUserWidget* UYUiManager::CreateOrGetItemTooltipWidget(TSubclassOf<UUserWidget> tooltipClass) {
    return NULL;
}

void UYUiManager::ClearCachedWidget() {
}


