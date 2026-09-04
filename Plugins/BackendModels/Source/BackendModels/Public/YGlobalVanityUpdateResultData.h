#pragma once
#include "CoreMinimal.h"
#include "EYUpdateGlobalVanityResult.h"
#include "YGlobalVanityData.h"
#include "YGlobalVanityUpdateResultData.generated.h"

USTRUCT(BlueprintType)
struct FYGlobalVanityUpdateResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUpdateGlobalVanityResult returnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGlobalVanityData globalVanity;
    
    BACKENDMODELS_API FYGlobalVanityUpdateResultData();
};

