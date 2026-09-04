#pragma once
#include "CoreMinimal.h"
#include "YDebugResetAllGenerators.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetAllGenerators {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugResetAllGenerators();
};

