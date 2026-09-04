#pragma once
#include "CoreMinimal.h"
#include "EYPromotionType.h"
#include "YDebugForceRotate.generated.h"

USTRUCT(BlueprintType)
struct FYDebugForceRotate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPromotionType rotationType;
    
    BACKENDMODELS_API FYDebugForceRotate();
};

