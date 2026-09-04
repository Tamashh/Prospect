#include "YTwitchDropsManager.h"

UYTwitchDropsManager::UYTwitchDropsManager() {
}

void UYTwitchDropsManager::RequestTwitchDropItemRewards(const UObject* objCtx) {
}

UYTwitchDropsManager* UYTwitchDropsManager::GetTwitchDropsManager(const UObject* WorldContext, const FString& ctxStr) {
    return NULL;
}

TArray<FYTwitchDropPackage> UYTwitchDropsManager::GetTwitchDropPackages() {
    return TArray<FYTwitchDropPackage>();
}

void UYTwitchDropsManager::ClaimTwitchDropPackage(const FString& PackageId) {
}

void UYTwitchDropsManager::ClaimOldestTwitchDropPackage() {
}


