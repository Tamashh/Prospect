#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHorizonTweenVectorConstraints.h"
#include "HorizonTweenEventCustomCurve.h"
#include "HorizonTweenEventTransformParam.h"
#include "HorizonTweenEventTweenListImplementParameters.h"
#include "HorizonTweenEventVectorParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventVectorParameters : public FHorizonTweenEventTweenListImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TweenStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TweenEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenVectorConstraints::Type> ConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventTransformParam TransformParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomCurve CustomTweenCurve;
    
    FHorizonTweenEventVectorParameters();
};

