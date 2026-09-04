#include "YDataTableManager.h"

UYDataTableManager::UYDataTableManager() {
    this->m_profanityDataObject = NULL;
}

void UYDataTableManager::RequestUpdatedSeasonsData() {
}

void UYDataTableManager::RequestUpdatedFeatureToggles() {
}

FYFeatureToggles UYDataTableManager::GetFeatureToggles(const UObject* objectContext) {
    return FYFeatureToggles{};
}

UYDataTableManager* UYDataTableManager::Get(const UObject* WorldContext, EYGetErrorHandling errorHandling) {
    return NULL;
}

bool UYDataTableManager::FindRowHandleFromDataTables(const FName& ID, const TArray<UDataTable*>& dataTablesToSearch, FDataTableRowHandle& outRowHandle) {
    return false;
}

bool UYDataTableManager::FindAllRowHandlesFromDataTables(const TArray<UDataTable*>& dataTables, TArray<FDataTableRowHandle>& outRowHandles) {
    return false;
}


