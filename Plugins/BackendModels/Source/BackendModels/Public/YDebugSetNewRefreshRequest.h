#pragma once
#include "CoreMinimal.h"
#include "YDebugSetNewRefreshRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetNewRefreshRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hourUtc;

    BACKENDMODELS_API FYDebugSetNewRefreshRequest();
};

