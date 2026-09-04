#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "HorizonTweenEventCustomCurve.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventCustomCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CustomTweenCurve;
    
    FHorizonTweenEventCustomCurve();
};

