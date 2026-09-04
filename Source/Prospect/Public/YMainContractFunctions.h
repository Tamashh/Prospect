#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYContractStatus.h"
#include "YContractChainProgressInfo.h"
#include "YContractReward.h"
#include "YContractUnlockReward.h"
#include "YMainContractFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYMainContractFunctions : public UObject {
    GENERATED_BODY()
public:
    UYMainContractFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainMissionChain(const FDataTableRowHandle& startingContract);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLastContractInChain(UObject* objectContext, FDataTableRowHandle contract);
    
    UFUNCTION(BlueprintCallable)
    static bool IsContractRewardsClaimed(UObject* objectContext, const FDataTableRowHandle& contract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContractAMainContract(const UObject* objectContext, const FString& contractId);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAllRewardsForContract(UObject* objectContext, FDataTableRowHandle contractRowHandle, TArray<FYContractReward>& outRewards);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineUnlockingShopItems(UObject* objectContext, FDataTableRowHandle contract, TArray<FYContractUnlockReward>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineUnlockingMaps(UObject* objectContext, FDataTableRowHandle contract, FDataTableRowHandle& outMapUnlock);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineUnlockingCraftingItems(UObject* objectContext, FDataTableRowHandle contract, TArray<FYContractUnlockReward>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineUnlockingContracts(UObject* objectContext, FDataTableRowHandle contract, TArray<FDataTableRowHandle>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineNextContractInChain(UObject* objectContext, FDataTableRowHandle startingContract, FDataTableRowHandle& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineLastContractInChain(UObject* objectContext, FDataTableRowHandle startingChainContract, FDataTableRowHandle& outLastContractInChain);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineFirstContractInChain(UObject* objectContext, FDataTableRowHandle contract, FDataTableRowHandle& outFirstContractInChain, int32& outContractPart);
    
    UFUNCTION(BlueprintCallable)
    static EYContractStatus DetermineContractStatus(UObject* playerContext, const FDataTableRowHandle& contract);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineContractInChainWithStatus(UObject* playerContext, const FDataTableRowHandle& missionChainStart, EYContractStatus desiredStatus, FDataTableRowHandle& outActiveContract);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineContractChainProgressInfo(UObject* objectContext, FDataTableRowHandle startingChainContract, FYContractChainProgressInfo& outProgressInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineChainProgress(UObject* playerContext, const FDataTableRowHandle& contract, int32& outNumContractsClaimed, int32& outNumContractsInChain);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineAllStartingMainContractChains(UObject* playerContext, FDataTableRowHandle factionFilter, bool excludeLockedChains, TArray<FDataTableRowHandle>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DetermineAllNextContractsInChain(UObject* objectContext, FDataTableRowHandle startContract, bool includeSelf, TArray<FDataTableRowHandle>& OutResult);
    
};

