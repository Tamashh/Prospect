#pragma once
#include "CoreMinimal.h"
#include "YDebugClearClaimedCampaignsResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugClearClaimedCampaignsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    FYDebugClearClaimedCampaignsResult();
};

