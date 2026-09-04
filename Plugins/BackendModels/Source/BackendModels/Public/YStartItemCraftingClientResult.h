#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YStartItemCraftingClientResult.generated.h"

USTRUCT(BlueprintType)
struct FYStartItemCraftingClientResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> changedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> deletedItemsIds;
    
    BACKENDMODELS_API FYStartItemCraftingClientResult();
};

