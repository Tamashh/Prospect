#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YProspectorLevelProgressionDataTableRow.h"
#include "YProspectorLevelRewardsDataTableRow.h"
#include "YProspectorLevelFunctionsLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYProspectorLevelFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYProspectorLevelFunctionsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalRequiredProspectorLevelXPForNextLevel(UObject* objectContext, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTitleByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRequiredProspectorLevelXPForNextLevel(UObject* objectContextn, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetProspectorLevelRewardRowByLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetProspectorLevelProgressionRowByLevel(UObject* objectContext, int32 Level, FYProspectorLevelProgressionDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetNextUnlockableTitle(UObject* objectContext, FYProspectorLevelRewardsDataTableRow& outData, bool& isThereATitleToUnlockNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetNextUnlockableBorder(UObject* objectContext, FYProspectorLevelRewardsDataTableRow& outData, bool& isThereABorderToUnlockNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissingProspectorLevelXPForLevelUp(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetIconByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentProspectorLevelXP(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentProspectorLevelByName(UObject* objectContext, const FString& Username);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentProspectorLevelByInternalUserId(UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentProspectorLevel(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetBorderByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalculateRequiredProspectorLevelXPForNextLevel(UObject* objectContext, int32 Level);
    
};

