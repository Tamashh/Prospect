#pragma once
#include "CoreMinimal.h"
#include "YDebugResetTechTree.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetTechTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugResetTechTree();
};

