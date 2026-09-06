#include "YLoadoutPresetManager.h"

UYLoadoutPresetManager::UYLoadoutPresetManager() {
}

void UYLoadoutPresetManager::UpdateLoadoutPresetOnBackend(int32 loadoutPresetId) {
}

void UYLoadoutPresetManager::UpdateLoadoutPresetFromPlayerSet(int32 loadoutPresetId, AActor* actorContext) {
}

void UYLoadoutPresetManager::SaveLoadoutPresetData(int32 loadoutPresetId, AActor* actorContext) {
}

void UYLoadoutPresetManager::HandleItemAddedToStash(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item) {
}

void UYLoadoutPresetManager::HandleInventoryOrStashChange(UYStateInventoryComponent* stateInventoryComponent) {
}

UYLoadoutPresetManager* UYLoadoutPresetManager::GetLoadoutPresetManager(const UObject* WorldContext, const FString& ctxStr) {
    return NULL;
}

FYLoadoutPreset UYLoadoutPresetManager::GetLoadoutPresetById(int32 loadoutPresetId) {
    return FYLoadoutPreset{};
}

void UYLoadoutPresetManager::FetchLoadoutPresetData() {
}
