#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString secret;
    
    BACKENDMODELS_API FYGameServerRequest();
};

