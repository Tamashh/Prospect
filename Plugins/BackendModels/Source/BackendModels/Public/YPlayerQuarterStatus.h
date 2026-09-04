#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YPlayerQuarterStatus.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerQuarterStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp upgradeStartedTime;
    
    BACKENDMODELS_API FYPlayerQuarterStatus();
};

