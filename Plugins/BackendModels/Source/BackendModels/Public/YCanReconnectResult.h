#pragma once
#include "CoreMinimal.h"
#include "YCanReconnectResult.generated.h"

USTRUCT(BlueprintType)
struct FYCanReconnectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lastSessionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lastSessionId;
    
    BACKENDMODELS_API FYCanReconnectResult();
};

