#include "YControllerVictimCompensationComponent.h"

UYControllerVictimCompensationComponent::UYControllerVictimCompensationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerVictimCompensationComponent::OnRefreshVictimCompensationPackagesCallback() {
}

void UYControllerVictimCompensationComponent::OnFetchVictimCompensationPackagesCallback(const TArray<FYClaimableVictimCompensation>& compensationPackages) {
}

void UYControllerVictimCompensationComponent::OnClaimVictimCompensationPackageCompletedCallback(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage) {
}

bool UYControllerVictimCompensationComponent::HasClaimableCompensationPackages() const {
    return false;
}

FYClaimableVictimCompensation UYControllerVictimCompensationComponent::GetOldestCompensationPackage() const {
    return FYClaimableVictimCompensation{};
}

TArray<FYInventoryItem> UYControllerVictimCompensationComponent::GetItemsFromCompensationPackage(const UObject* WorldContextObject, const FYClaimableVictimCompensation& compensationPackage) {
    return TArray<FYInventoryItem>();
}

TArray<FYClaimableVictimCompensation> UYControllerVictimCompensationComponent::GetClaimableCompensationPackages() const {
    return TArray<FYClaimableVictimCompensation>();
}

bool UYControllerVictimCompensationComponent::GetClaimableCompensationPackageFromGuid(const FString& Guid, FYClaimableVictimCompensation& claimableVictimCompensation) const {
    return false;
}

void UYControllerVictimCompensationComponent::FetchVictimCompensationPackages() {
}

void UYControllerVictimCompensationComponent::ClaimOldestCompensationPackage() {
}

void UYControllerVictimCompensationComponent::ClaimCompensationPackage(const FString& Guid) {
}


