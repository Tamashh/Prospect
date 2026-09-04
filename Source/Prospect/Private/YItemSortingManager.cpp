#include "YItemSortingManager.h"

UYItemSortingManager::UYItemSortingManager() {
    this->m_itemSortingSettings = NULL;
    this->m_sortingEnabled = true;
}

void UYItemSortingManager::ToggleSorting(bool newState) {
}

void UYItemSortingManager::NextLayerRowHandle() {
}

UYItemSortingManager* UYItemSortingManager::GetItemSortingManager(const UObject* WorldContext, const FString& contextString) {
    return NULL;
}

bool UYItemSortingManager::GetItemSortingLayersFromContext(const UObject* WorldContext, TArray<FYItemSortingLayer>& itemSortingLayers, const FString& contextString) {
    return false;
}

bool UYItemSortingManager::GetItemSortingLayers(TArray<FYItemSortingLayer>& itemSortingLayers, const FString& contextString) {
    return false;
}

FDataTableRowHandle UYItemSortingManager::GetCurrentItemSortingLayerRowHandle() const {
    return FDataTableRowHandle{};
}

bool UYItemSortingManager::GetCurrentItemSortingLayerFromContext(const UObject* WorldContext, FYItemSortingLayer& itemSortingLayer, const FString& contextString) {
    return false;
}

bool UYItemSortingManager::GetCurrentItemSortingLayer(FYItemSortingLayer& itemSortingLayer, const FString& contextString) {
    return false;
}


