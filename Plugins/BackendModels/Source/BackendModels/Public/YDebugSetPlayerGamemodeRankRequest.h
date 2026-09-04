#pragma once
#include "CoreMinimal.h"
#include "YDebugSetPlayerGamemodeRankRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugSetPlayerGamemodeRankRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    FYDebugSetPlayerGamemodeRankRequest();
};

