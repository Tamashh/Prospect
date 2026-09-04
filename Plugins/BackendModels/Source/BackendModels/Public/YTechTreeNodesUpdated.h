#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YTechTreeNodesUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeNodesUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeStatus> updatedNodes;
    
    BACKENDMODELS_API FYTechTreeNodesUpdated();
};

