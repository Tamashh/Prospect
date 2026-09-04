#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YSellInventoryUpdate.generated.h"

USTRUCT(BlueprintType)
struct FYSellInventoryUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> itemsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsToUpdateAmount;
    
    BACKENDMODELS_API FYSellInventoryUpdate();
};

