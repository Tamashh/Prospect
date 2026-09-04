#pragma once
#include "CoreMinimal.h"
#include "YDebugResetAllFactionsProgressionResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetAllFactionsProgressionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYDebugResetAllFactionsProgressionResponse();
};

