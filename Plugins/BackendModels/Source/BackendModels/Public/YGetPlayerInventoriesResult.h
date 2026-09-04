#pragma once
#include "CoreMinimal.h"
#include "YInventory.h"
#include "YGetPlayerInventoriesResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerInventoriesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventory> entries;
    
    BACKENDMODELS_API FYGetPlayerInventoriesResult();
};

