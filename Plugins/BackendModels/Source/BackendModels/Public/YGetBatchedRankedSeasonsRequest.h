#pragma once
#include "CoreMinimal.h"
#include "YGetBatchedRankedSeasonsRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetBatchedRankedSeasonsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numTopPlayers;
    
    FYGetBatchedRankedSeasonsRequest();
};

