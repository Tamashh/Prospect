#pragma once
#include "CoreMinimal.h"
#include "YBackendFreeLoadout.h"
#include "YDebugSetFreeLoadoutInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetFreeLoadoutInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendFreeLoadout backendFreeLoadout;

    BACKENDMODELS_API FYDebugSetFreeLoadoutInfoResponse();
};

