#include "YContractsUtils.h"

UYContractsUtils::UYContractsUtils() {
}

bool UYContractsUtils::TryGetContractDataTableRowHandle(const UObject* WorldContext, const FYContractRow& contractConfigData, FDataTableRowHandle& contractRowHandle) {
    return false;
}

bool UYContractsUtils::TryGetContractConfigData(const UObject* worldCtx, const FString& contractId, FYContractRow& contractConfigData) {
    return false;
}

bool UYContractsUtils::IsAtLeastOneJobUnlocked(AActor* actorCtx) {
    return false;
}

bool UYContractsUtils::GetNumOfActiveContracts(AActor* actorContext, int32& outActiveJobs, int32& outActiveMissions) {
    return false;
}

int32 UYContractsUtils::GetMaxNumOfActiveJobContracts(const AActor* actorCtx) {
    return 0;
}

bool UYContractsUtils::GetContractFaction(const UObject* worldCtx, const FString& contractId, EYFaction& Faction) {
    return false;
}

EYContractStatus UYContractsUtils::GetActiveContractStatus(const FYContractRow& activeContractConfigData, const TArray<int32>& currentProgress, const FString& contextString) {
    return EYContractStatus::Invalid;
}

FText UYContractsUtils::DetermineContractObjectiveDescription(const UObject* WorldContext, const FYContractObjective& objective) {
    return FText::GetEmpty();
}

bool UYContractsUtils::ContractIsLockedDueToFactionProgressionNotBeingHighEnough(AActor* actorCtx, const FString& factionId, const FYContractProgressionUnlockData& progressionUnlockCollectionData) {
    return false;
}

FText UYContractsUtils::ContractDifficultyToText(EYContractDifficulty contractDifficulty) {
    return FText::GetEmpty();
}

bool UYContractsUtils::ContractCanBePurchased(const FYContractRow& contractConfigData, UObject* objCtx) {
    return false;
}

bool UYContractsUtils::AreThereStillSlotsAvailableForActiveContracts(AActor* actorContext) {
    return false;
}


