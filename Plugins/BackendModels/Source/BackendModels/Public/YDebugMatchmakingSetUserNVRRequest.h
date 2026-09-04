#pragma once
#include "CoreMinimal.h"
#include "YDebugMatchmakingSetUserNVRRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugMatchmakingSetUserNVRRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nvr;
    
    BACKENDMODELS_API FYDebugMatchmakingSetUserNVRRequest();
};

