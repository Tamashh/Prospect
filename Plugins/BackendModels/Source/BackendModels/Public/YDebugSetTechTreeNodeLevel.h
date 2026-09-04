#pragma once
#include "CoreMinimal.h"
#include "YDebugSetTechTreeNodeEntry.h"
#include "YDebugSetTechTreeNodeLevel.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetTechTreeNodeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDebugSetTechTreeNodeEntry> nodesToChange;
    
    BACKENDMODELS_API FYDebugSetTechTreeNodeLevel();
};

