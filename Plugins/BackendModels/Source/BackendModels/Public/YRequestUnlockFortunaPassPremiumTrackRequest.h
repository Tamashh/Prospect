#pragma once
#include "CoreMinimal.h"
#include "YRequestUnlockFortunaPassPremiumTrackRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestUnlockFortunaPassPremiumTrackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool withSkipLevels;
    
    BACKENDMODELS_API FYRequestUnlockFortunaPassPremiumTrackRequest();
};

