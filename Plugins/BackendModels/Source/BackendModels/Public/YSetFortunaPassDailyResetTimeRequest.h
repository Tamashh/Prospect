#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YSetFortunaPassDailyResetTimeRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetFortunaPassDailyResetTimeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp minutesToReset;
    
    BACKENDMODELS_API FYSetFortunaPassDailyResetTimeRequest();
};

