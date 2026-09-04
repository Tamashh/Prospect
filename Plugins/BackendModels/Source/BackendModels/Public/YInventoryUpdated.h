#pragma once
#include "CoreMinimal.h"
#include "YInventory.h"
#include "YInventoryUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYInventoryUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventory Inventory;
    
    BACKENDMODELS_API FYInventoryUpdated();
};

