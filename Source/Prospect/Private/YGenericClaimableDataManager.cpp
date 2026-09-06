#include "YGenericClaimableDataManager.h"

UYGenericClaimableDataManager::UYGenericClaimableDataManager() {
}

void UYGenericClaimableDataManager::OnOwnedEntitlementsChanged(const TArray<FString>& ownedEntitlements) {
}

void UYGenericClaimableDataManager::OnFetchDataFromPlayFabInternalResponse(const FYAzureFunctionResult& azureResult) {
}

void UYGenericClaimableDataManager::OnCouponRedeemed(const FYClaimCouponCodeResult& redeemResult, const TArray<FDataTableRowHandle>& itemRows) {
}

void UYGenericClaimableDataManager::OnClaimGenericClaimableDataResponse(const FYAzureFunctionResult& azureResult) {
}

UYGenericClaimableDataManager* UYGenericClaimableDataManager::GetGenericClaimableDataManager(const UObject* objectContext) {
    return NULL;
}

TArray<FYGenericClaimableData> UYGenericClaimableDataManager::GetCachedGenericClaimableData(const UObject* objectContext) {
    return TArray<FYGenericClaimableData>();
}

void UYGenericClaimableDataManager::ClaimOldestGenericClaimableData(const UObject* objectContext) {
}

void UYGenericClaimableDataManager::ClaimGenericClaimableData(const UObject* objectContext, const FString& ID, const EYGenericClaimableOrigin Origin) {
}
