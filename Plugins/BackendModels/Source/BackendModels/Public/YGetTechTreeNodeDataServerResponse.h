#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YGetTechTreeNodeDataServerResponse.generated.h"

USTRUCT(BlueprintType)
struct FYGetTechTreeNodeDataServerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeStatus> nodesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 remainingTimeInSeconds;
    
    BACKENDMODELS_API FYGetTechTreeNodeDataServerResponse();
};

