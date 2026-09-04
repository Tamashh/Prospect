#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "YSetActiveGlobalVanityResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveGlobalVanityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalVanity activeVanity;
    
    BACKENDMODELS_API FYSetActiveGlobalVanityResponse();
};

