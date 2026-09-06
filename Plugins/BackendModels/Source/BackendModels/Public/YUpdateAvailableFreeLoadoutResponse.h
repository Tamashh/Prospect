#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YUpdateAvailableFreeLoadoutResponse.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateAvailableFreeLoadoutResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newRandomSeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp loadoutExpirationTimeSecondsUtc;

    BACKENDMODELS_API FYUpdateAvailableFreeLoadoutResponse();
};
