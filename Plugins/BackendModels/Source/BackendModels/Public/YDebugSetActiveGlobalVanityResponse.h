#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "YCustomItemInfo.h"
#include "YDebugSetActiveGlobalVanityResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActiveGlobalVanityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalVanity activeVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updatedVanityItems;
    
    BACKENDMODELS_API FYDebugSetActiveGlobalVanityResponse();
};

