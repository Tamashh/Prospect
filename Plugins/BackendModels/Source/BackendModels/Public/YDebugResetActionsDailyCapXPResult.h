#pragma once
#include "CoreMinimal.h"
#include "YDebugResetActionsDailyCapXPResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetActionsDailyCapXPResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYDebugResetActionsDailyCapXPResult();
};

