#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "YSetActiveGlobalVanityRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveGlobalVanityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalVanity activeVanity;
    
    BACKENDMODELS_API FYSetActiveGlobalVanityRequest();
};

