#pragma once
#include "CoreMinimal.h"
#include "YDebugResetPlayerGamemodeRankRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugResetPlayerGamemodeRankRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    FYDebugResetPlayerGamemodeRankRequest();
};

