#pragma once
#include "CoreMinimal.h"
#include "YPassiveGenerator.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EYPassiveGeneratorRewardType.h"
#include "YGeneratorInfo.h"
#include "YGeneratorRow.h"
#include "YRewardDataTableRow.h"
#include "YUIDailyCrateTimerInfo.h"
#include "YGeneratorsUtils.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGeneratorsUtils : public UObject {
    GENERATED_BODY()
public:
    UYGeneratorsUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText RewardToText(EYPassiveGeneratorRewardType generatorRewardType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FTimespan GetTimespanUntilNextPassiveGeneratorReward(UObject* WorldContext, const FString& contextString, const FName& generatorId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FYPassiveGenerator> GetPassiveGenerators(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetMaxClaimableAmountForPassiveGenerator(UObject* WorldContext, const FString& contextString, const FName& generatorId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FYUIDailyCrateTimerInfo GetGeneratorTimerInfo(UObject* WorldContext, const FYGeneratorInfo& Generator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetEffectiveGenRateForPassiveGenerator(UObject* WorldContext, const FString& callerContext, const FName& generatorId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetCurrentDailyCrateLevel(UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetCurrentClaimableAmountForPassiveGenerator(UObject* WorldContext, const FString& contextString, const FName& generatorId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetCrateItems(UObject* WorldContext, int32 crateLevel, TArray<FYRewardDataTableRow>& crateItems);
    
    UFUNCTION(BlueprintCallable)
    static bool FindPassiveGeneratorRow(const UObject* objectContext, const FString& contextString, const FName& rowId, FYGeneratorRow& outPassiveGeneratorRow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool ClaimPassiveGeneratorIncome(UObject* WorldContext, const FName& generatorId);
    
};

