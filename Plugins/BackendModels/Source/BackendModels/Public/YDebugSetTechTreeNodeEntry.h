#pragma once
#include "CoreMinimal.h"
#include "YDebugSetTechTreeNodeEntry.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetTechTreeNodeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    BACKENDMODELS_API FYDebugSetTechTreeNodeEntry();
};

