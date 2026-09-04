#include "YInventoryComponentManager.h"

UYInventoryComponentManager::UYInventoryComponentManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYInventoryComponentManager::OnRepInventoryComponent() {
}

TArray<FYInventoryLink> UYInventoryComponentManager::GetInventoryLinks() const {
    return TArray<FYInventoryLink>();
}

UYInventoryComponentManager* UYInventoryComponentManager::GetInventoryComponentManager(const UObject* WorldContext, const FString& contextString) {
    return NULL;
}

UYStateInventoryComponent* UYInventoryComponentManager::GetInventoryComponentForId(int32 ID, const FString& Context) {
    return NULL;
}


