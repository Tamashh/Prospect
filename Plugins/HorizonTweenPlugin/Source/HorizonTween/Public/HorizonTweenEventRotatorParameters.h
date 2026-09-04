#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHorizonTweenRotatorConstraints.h"
#include "HorizonTweenEventCustomCurve.h"
#include "HorizonTweenEventTransformParam.h"
#include "HorizonTweenEventTweenListImplementParameters.h"
#include "HorizonTweenEventRotatorParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventRotatorParameters : public FHorizonTweenEventTweenListImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> TweenStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> TweenEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenRotatorConstraints::Type> ConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventTransformParam TransformParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomCurve CustomTweenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShortestPath;
    
    FHorizonTweenEventRotatorParameters();
};

