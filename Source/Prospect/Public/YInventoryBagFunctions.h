#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YInventoryItem.h"
#include "YInventoryBagFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYInventoryBagFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYInventoryBagFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateStackWeight(const FYInventoryItem& StackedItem, bool isInBag, AActor* contextObject);

};
