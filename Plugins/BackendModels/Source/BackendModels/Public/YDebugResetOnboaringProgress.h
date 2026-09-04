#pragma once
#include "CoreMinimal.h"
#include "YDebugResetOnboaringProgress.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetOnboaringProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugResetOnboaringProgress();
};

