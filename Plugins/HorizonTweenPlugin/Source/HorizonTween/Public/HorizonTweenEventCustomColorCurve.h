#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveLinearColor.h"
#include "HorizonTweenEventCustomColorCurve.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventCustomColorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCurveLinearColor CustomTweenCurve;
    
    FHorizonTweenEventCustomColorCurve();
};

