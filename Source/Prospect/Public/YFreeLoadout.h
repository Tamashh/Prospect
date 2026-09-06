#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YFreeLoadout.generated.h"

USTRUCT(BlueprintType)
struct FYFreeLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 randomSeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastUsedTimeSeconds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp loadoutExpirationTimeSecondsUtc;

    PROSPECT_API FYFreeLoadout();
};

