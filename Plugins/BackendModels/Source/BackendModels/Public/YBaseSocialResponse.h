#pragma once
#include "CoreMinimal.h"
#include "YBaseSocialResponse.generated.h"

USTRUCT(BlueprintType)
struct FYBaseSocialResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYBaseSocialResponse();
};

