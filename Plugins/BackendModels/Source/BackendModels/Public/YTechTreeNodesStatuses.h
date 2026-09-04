#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YTechTreeNodesStatuses.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeNodesStatuses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeStatus> nodes;
    
    BACKENDMODELS_API FYTechTreeNodesStatuses();
};

