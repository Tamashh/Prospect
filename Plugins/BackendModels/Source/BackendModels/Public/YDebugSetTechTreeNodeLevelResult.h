#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugSetTechTreeNodeEntry.h"
#include "YDebugSetTechTreeNodeLevelResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetTechTreeNodeLevelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDebugSetTechTreeNodeEntry> nodesThatChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugSetTechTreeNodeLevelResult();
};

