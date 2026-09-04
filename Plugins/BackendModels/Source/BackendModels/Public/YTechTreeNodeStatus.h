#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YTechTreeNodeStatus.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeNodeStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp upgradeStartedTime;
    
    BACKENDMODELS_API FYTechTreeNodeStatus();
};

