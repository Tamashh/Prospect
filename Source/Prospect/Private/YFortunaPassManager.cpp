#include "YFortunaPassManager.h"

UYFortunaPassManager::UYFortunaPassManager() {
    this->m_model = NULL;
}

void UYFortunaPassManager::RequestClaimableStarterPackData(const UObject* ctxObj) {
}

void UYFortunaPassManager::RefreshData() {
}

bool UYFortunaPassManager::PurchasePremiumTrack(const UObject* objectContext, bool withSkipLevels) {
    return false;
}

void UYFortunaPassManager::OnUpdatedDataTableFromTitleDataReceived(const FString& titleDataKey) {
}

TArray<FYClaimableStarterPack> UYFortunaPassManager::GetClaimableStarterPacks() const {
    return TArray<FYClaimableStarterPack>();
}

UYFortunaPassManager* UYFortunaPassManager::FindFortunaPassManager(const UObject* objCtx, const FString& contextString) {
    return NULL;
}

void UYFortunaPassManager::ClaimStarterPackPackage(const UObject* ctxObj, const FString& bundleId) {
}

void UYFortunaPassManager::ClaimOldestStarterPackPackage(const UObject* ctxObj) {
}


