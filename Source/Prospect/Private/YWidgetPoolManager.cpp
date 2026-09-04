#include "YWidgetPoolManager.h"
#include "Templates/SubclassOf.h"

UYWidgetPoolManager::UYWidgetPoolManager() {
}

void UYWidgetPoolManager::ReturnWidgetToPool(UUserWidget* Widget) {
}

UUserWidget* UYWidgetPoolManager::GetWidgetFromPool(TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}

UYWidgetPoolManager* UYWidgetPoolManager::Get(const UObject* WorldContext, EYGetErrorHandling errorHandling) {
    return NULL;
}


