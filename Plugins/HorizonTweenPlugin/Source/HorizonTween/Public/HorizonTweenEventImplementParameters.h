#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventImplementParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomCurve;
    
    FHorizonTweenEventImplementParameters();
};

