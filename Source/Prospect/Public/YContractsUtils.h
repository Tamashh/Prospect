#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYContractDifficulty.h"
#include "EYContractStatus.h"
#include "EYFaction.h"
#include "YContractObjective.h"
#include "YContractProgressionUnlockData.h"
#include "YContractRow.h"
#include "YContractsUtils.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class PROSPECT_API UYContractsUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYContractsUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool TryGetContractDataTableRowHandle(const UObject* WorldContext, const FYContractRow& contractConfigData, FDataTableRowHandle& contractRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetContractConfigData(const UObject* worldCtx, const FString& contractId, FYContractRow& contractConfigData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAtLeastOneJobUnlocked(AActor* actorCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNumOfActiveContracts(AActor* actorContext, int32& outActiveJobs, int32& outActiveMissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxNumOfActiveJobContracts(const AActor* actorCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool GetContractFaction(const UObject* worldCtx, const FString& contractId, EYFaction& Faction);
    
    UFUNCTION(BlueprintCallable)
    static EYContractStatus GetActiveContractStatus(const FYContractRow& activeContractConfigData, const TArray<int32>& currentProgress, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FText DetermineContractObjectiveDescription(const UObject* WorldContext, const FYContractObjective& objective);
    
    UFUNCTION(BlueprintCallable)
    static bool ContractIsLockedDueToFactionProgressionNotBeingHighEnough(AActor* actorCtx, const FString& factionId, const FYContractProgressionUnlockData& progressionUnlockCollectionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ContractDifficultyToText(EYContractDifficulty contractDifficulty);
    
    UFUNCTION(BlueprintCallable)
    static bool ContractCanBePurchased(const FYContractRow& contractConfigData, UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreThereStillSlotsAvailableForActiveContracts(AActor* actorContext);
    
};

