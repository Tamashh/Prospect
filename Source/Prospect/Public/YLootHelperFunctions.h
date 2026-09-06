#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Math/RandomStream.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YLootItemAmount.h"
#include "YLootHelperFunctions.generated.h"

UCLASS(Blueprintable)
class UYLootHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYLootHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToDebugString(const FYLootItemAmount& itemAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToCompactDebugString(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultLootItemMembers(FYInventoryItem& inventoryItem, const TArray<FDataTableRowHandle>& modsToAdd);
    
    UFUNCTION(BlueprintCallable)
    static FYLootItemAmount RollOnLootRow(const UObject* contextObject, FDataTableRowHandle rowHandle, const FRandomStream& RandomStream);

    UFUNCTION(BlueprintCallable)
    static TArray<FYLootItemAmount> RollForLootItemsFromListRoll(const UObject* contextObject, FDataTableRowHandle rowHandle);

    UFUNCTION(BlueprintCallable)
    static TArray<FYLootItemAmount> RollForLootItems(const UObject* contextObject, FDataTableRowHandle rowHandle, int32 numRolls, int32 randomSeed);

    UFUNCTION(BlueprintCallable)
    static FYLootItemAmount GetHighestValueItem(TArray<FYLootItemAmount> itemsToCompare);
    
};

