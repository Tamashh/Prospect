#include "YMainContractFunctions.h"

UYMainContractFunctions::UYMainContractFunctions() {
}

bool UYMainContractFunctions::IsMainMissionChain(const FDataTableRowHandle& startingContract) {
    return false;
}

bool UYMainContractFunctions::IsLastContractInChain(UObject* objectContext, FDataTableRowHandle contract) {
    return false;
}

bool UYMainContractFunctions::IsContractRewardsClaimed(UObject* objectContext, const FDataTableRowHandle& contract) {
    return false;
}

bool UYMainContractFunctions::IsContractAMainContract(const UObject* objectContext, const FString& contractId) {
    return false;
}

bool UYMainContractFunctions::FindAllRewardsForContract(UObject* objectContext, FDataTableRowHandle contractRowHandle, TArray<FYContractReward>& outRewards) {
    return false;
}

bool UYMainContractFunctions::DetermineUnlockingShopItems(UObject* objectContext, FDataTableRowHandle contract, TArray<FYContractUnlockReward>& OutResult) {
    return false;
}

bool UYMainContractFunctions::DetermineUnlockingMaps(UObject* objectContext, FDataTableRowHandle contract, FDataTableRowHandle& outMapUnlock) {
    return false;
}

bool UYMainContractFunctions::DetermineUnlockingCraftingItems(UObject* objectContext, FDataTableRowHandle contract, TArray<FYContractUnlockReward>& OutResult) {
    return false;
}

bool UYMainContractFunctions::DetermineUnlockingContracts(UObject* objectContext, FDataTableRowHandle contract, TArray<FDataTableRowHandle>& OutResult) {
    return false;
}

bool UYMainContractFunctions::DetermineNextContractInChain(UObject* objectContext, FDataTableRowHandle startingContract, FDataTableRowHandle& OutResult) {
    return false;
}

bool UYMainContractFunctions::DetermineLastContractInChain(UObject* objectContext, FDataTableRowHandle startingChainContract, FDataTableRowHandle& outLastContractInChain) {
    return false;
}

bool UYMainContractFunctions::DetermineFirstContractInChain(UObject* objectContext, FDataTableRowHandle contract, FDataTableRowHandle& outFirstContractInChain, int32& outContractPart) {
    return false;
}

EYContractStatus UYMainContractFunctions::DetermineContractStatus(UObject* playerContext, const FDataTableRowHandle& contract) {
    return EYContractStatus::Invalid;
}

bool UYMainContractFunctions::DetermineContractInChainWithStatus(UObject* playerContext, const FDataTableRowHandle& missionChainStart, EYContractStatus desiredStatus, FDataTableRowHandle& outActiveContract) {
    return false;
}

bool UYMainContractFunctions::DetermineContractChainProgressInfo(UObject* objectContext, FDataTableRowHandle startingChainContract, FYContractChainProgressInfo& outProgressInfo) {
    return false;
}

bool UYMainContractFunctions::DetermineChainProgress(UObject* playerContext, const FDataTableRowHandle& contract, int32& outNumContractsClaimed, int32& outNumContractsInChain) {
    return false;
}

bool UYMainContractFunctions::DetermineAllStartingMainContractChains(UObject* playerContext, FDataTableRowHandle factionFilter, bool excludeLockedChains, TArray<FDataTableRowHandle>& OutResult) {
    return false;
}

bool UYMainContractFunctions::DetermineAllNextContractsInChain(UObject* objectContext, FDataTableRowHandle startContract, bool includeSelf, TArray<FDataTableRowHandle>& OutResult) {
    return false;
}


