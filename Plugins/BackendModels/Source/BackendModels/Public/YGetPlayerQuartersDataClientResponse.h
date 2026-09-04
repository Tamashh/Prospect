#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YGetPlayerQuartersDataClientResponse.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerQuartersDataClientResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp upgradeStartedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 remainingTimeInSeconds;
    
    BACKENDMODELS_API FYGetPlayerQuartersDataClientResponse();
};

