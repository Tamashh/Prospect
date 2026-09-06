#pragma once
#include "CoreMinimal.h"
#include "YDebugSetNewRefreshResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetNewRefreshResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    BACKENDMODELS_API FYDebugSetNewRefreshResponse();
};
