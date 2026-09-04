#pragma once
#include "CoreMinimal.h"
#include "YSkipTechTreeNodeUpgradeClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSkipTechTreeNodeUpgradeClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useOptionalCosts;
    
    BACKENDMODELS_API FYSkipTechTreeNodeUpgradeClientRequest();
};

