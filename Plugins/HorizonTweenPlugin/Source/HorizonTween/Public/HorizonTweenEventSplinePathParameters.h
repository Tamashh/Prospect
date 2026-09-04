#pragma once
#include "CoreMinimal.h"
#include "EHorizonTweenRotatorConstraints.h"
#include "EHorizonTweenVectorConstraints.h"
#include "HorizonTweenEventCustomCurve.h"
#include "HorizonTweenEventImplementParameters.h"
#include "HorizonTweenEventTransformParam.h"
#include "HorizonTweenEventSplinePathParameters.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSplinePathParameters : public FHorizonTweenEventImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenVectorConstraints::Type> LocationConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenRotatorConstraints::Type> RotatorConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenVectorConstraints::Type> ScaleConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventTransformParam TransformParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomCurve CustomTweenCurve;
    
    FHorizonTweenEventSplinePathParameters();
};

