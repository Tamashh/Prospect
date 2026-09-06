#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YCostEntryRow.h"
#include "YUIInventoryData.h"
#include "YLoadoutPresetFunctionsLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROSPECT_API UYLoadoutPresetFunctionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYLoadoutPresetFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static void SaveLoadoutPreset(UObject* objectContext, int32 loadoutpresetIndex);

    UFUNCTION(BlueprintCallable)
    static void PurchaseMissingItemsForLoadoutPreset(UObject* objectContext, const int32 loadoutpresetIndex);

    UFUNCTION(BlueprintCallable)
    static void GetUIInvnetoryDataFromLoadoutPresetById(UObject* objectContext, int32 loadoutpresetIndex, FYUIInventoryData& uiInventoryData);

    UFUNCTION(BlueprintCallable)
    static void GetLoadoutPresetMissingItemData(UObject* objectContext, TMap<FString, int32>& outMissingItemData);

    UFUNCTION(BlueprintCallable)
    static bool DoesPlayerHaveAllItemsForLoadoutPreset(UObject* objectContext, int32 loadoutpresetIndex, TMap<FString, int32>& outMissingItemData);

    UFUNCTION(BlueprintCallable)
    static TArray<FYCostEntryRow> CalculateLoadoutPresetCostForMissingItems(UObject* objectContext, TMap<FString, int32> missingItemData);

    UFUNCTION(BlueprintCallable)
    static bool ApplyItemsPreset(UObject* objectContext, int32 loadoutpresetIndex, bool useInventoryOverflowCheck);

};
