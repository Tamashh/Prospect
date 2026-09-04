#pragma once
#include "CoreMinimal.h"
#include "YCraftedItemData.h"
#include "YStopItemCraftingClientResult.generated.h"

USTRUCT(BlueprintType)
struct FYStopItemCraftingClientResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCraftedItemData craftedItemData;
    
    BACKENDMODELS_API FYStopItemCraftingClientResult();
};

