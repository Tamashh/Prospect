#pragma once
#include "CoreMinimal.h"
#include "YCraftedItemData.h"
#include "YCurrencyItem.h"
#include "YSkipItemCraftingClientResult.generated.h"

USTRUCT(BlueprintType)
struct FYSkipItemCraftingClientResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCraftedItemData craftedItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    BACKENDMODELS_API FYSkipItemCraftingClientResult();
};

