#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventCustomCurve.h"
#include "HorizonTweenEventTweenListImplementParameters.h"
#include "HorizonTweenEventFloatParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventFloatParameters : public FHorizonTweenEventTweenListImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TweenStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TweenEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomCurve CustomTweenCurve;
    
    FHorizonTweenEventFloatParameters();
};

