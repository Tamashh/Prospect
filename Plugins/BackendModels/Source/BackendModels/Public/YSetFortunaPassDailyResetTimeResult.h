#pragma once
#include "CoreMinimal.h"
#include "YSetFortunaPassDailyResetTimeResult.generated.h"

USTRUCT(BlueprintType)
struct FYSetFortunaPassDailyResetTimeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYSetFortunaPassDailyResetTimeResult();
};

