#pragma once
#include "CoreMinimal.h"
#include "YDebugGivePlayerGamemodeRankRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugGivePlayerGamemodeRankRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    FYDebugGivePlayerGamemodeRankRequest();
};

