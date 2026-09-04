#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YShopItem.h"
#include "YCraftingFunctions.generated.h"

UCLASS(Blueprintable)
class UYCraftingFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCraftingFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreShopItemsTheSame(const FYShopItem& lhs, const FYShopItem& rhs);
    
};

