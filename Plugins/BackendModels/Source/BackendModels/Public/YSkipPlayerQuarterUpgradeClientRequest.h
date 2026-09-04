#pragma once
#include "CoreMinimal.h"
#include "YSkipPlayerQuarterUpgradeClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSkipPlayerQuarterUpgradeClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useOptionalCosts;
    
    BACKENDMODELS_API FYSkipPlayerQuarterUpgradeClientRequest();
};

