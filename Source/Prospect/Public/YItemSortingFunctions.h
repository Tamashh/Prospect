#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYSortingMethod.h"
#include "YInventoryItem.h"
#include "YItemSortingFunctions.generated.h"

class UObject;
class UYWidget_ItemContainer;

UCLASS(Blueprintable)
class PROSPECT_API UYItemSortingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYItemSortingFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortWidgetItemContainersByEnum(UObject* WorldContext, const TArray<UYWidget_ItemContainer*>& inItemContainer, TArray<UYWidget_ItemContainer*>& outItemContainer, EYSortingMethod sortingMethod);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortWidgetItemContainers(UObject* WorldContext, const TArray<UYWidget_ItemContainer*>& inItemContainer, TArray<UYWidget_ItemContainer*>& outItemContainer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortInventoryItems(UObject* WorldContext, const TArray<FYInventoryItem>& inItems, TArray<FYInventoryItem>& outItems);
    
};

