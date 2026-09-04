#pragma once
#include "CoreMinimal.h"
#include "YInventoryInfoUserEntry.generated.h"

USTRUCT(BlueprintType)
struct FYInventoryInfoUserEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryStashLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryBagLimit;
    
    BACKENDMODELS_API FYInventoryInfoUserEntry();
};

