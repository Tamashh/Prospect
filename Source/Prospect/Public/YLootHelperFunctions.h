#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
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
    static TArray<FYLootItemAmount> RollForLootItemsFromListRoll(UObject* contextObject, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FYLootItemAmount> RollForLootItems(UObject* contextObject, FDataTableRowHandle rowHandle, int32 numRolls);
    
};

