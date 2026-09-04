#pragma once
#include "CoreMinimal.h"
#include "YStartTechTreeNodeUpgradeClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYStartTechTreeNodeUpgradeClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName nodeId;
    
    BACKENDMODELS_API FYStartTechTreeNodeUpgradeClientRequest();
};

