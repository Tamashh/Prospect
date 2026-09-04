#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YCustomItemInfo.h"
#include "YInventoryItems.generated.h"

USTRUCT(BlueprintType)
struct FYInventoryItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    BACKENDMODELS_API FYInventoryItems();
};

