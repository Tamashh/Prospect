#include "YShopManager.h"

UYShopManager::UYShopManager() {
}

void UYShopManager::OnStoreRotationDataResult(const FYAzureFunctionResult& azureResult) {
}

void UYShopManager::OnSteamOverlayActivated(bool activated) {
}

void UYShopManager::OnGetStoreItemsResult(const FYAzureFunctionResult& azureResult) {
}

void UYShopManager::OnFetchEntitlementsResponse(const FYAzureFunctionResult& azureResult) {
}

void UYShopManager::OnEntitlementsUpdated(const TArray<FName>& entitlements) {
}

void UYShopManager::OnActiveOffersUpdated(const TArray<FYShopOffer>& activeOffers) {
}

bool UYShopManager::IsSingleItemOneTimePurchase(const UObject* Context, const FString& ctxStr, const FName& ItemId) {
    return false;
}

bool UYShopManager::IsOneTimePurchaseSingleItemAlreadyOwned(const FString& ItemId, UObject* objectContext) {
    return false;
}

bool UYShopManager::IsItemNewArchetype(const UObject* objectContext, const FDataTableRowHandle& rowHandle, const FString& ID) const {
    return false;
}

UYShopManager* UYShopManager::Get(const UObject* WorldContext, EYGetErrorHandling errorHandling) {
    return NULL;
}

void UYShopManager::BroadcastOneTimePurchasesUpdates(const FString& ItemId, const UObject* objectContext) {
}


