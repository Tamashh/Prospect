#pragma once
#include "CoreMinimal.h"
#include "YGetFactionsProgressionRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGetFactionsProgressionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYGetFactionsProgressionRequest();
};

