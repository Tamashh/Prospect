#pragma once
#include "CoreMinimal.h"
#include "YDebugSetFortunaPassPremiumUnlockRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetFortunaPassPremiumUnlockRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool newState;
    
    BACKENDMODELS_API FYDebugSetFortunaPassPremiumUnlockRequest();
};

