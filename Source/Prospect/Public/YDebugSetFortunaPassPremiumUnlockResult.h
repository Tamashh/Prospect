#pragma once
#include "CoreMinimal.h"
#include "YDebugSetFortunaPassPremiumUnlockResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYDebugSetFortunaPassPremiumUnlockResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    FYDebugSetFortunaPassPremiumUnlockResult();
};

