#pragma once
#include "CoreMinimal.h"
#include "YPlayerInventoryLimitResultData.h"
#include "YGetPlayerInventoriesLimitsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerInventoriesLimitsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerInventoryLimitResultData> entries;
    
    BACKENDMODELS_API FYGetPlayerInventoriesLimitsResult();
};

