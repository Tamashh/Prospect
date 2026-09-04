#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHorizonTweenCoordinateSpace.h"
#include "EHorizonTweenVector2DConstraints.h"
#include "HorizonTweenEventCustomCurve.h"
#include "HorizonTweenEventTweenListImplementParameters.h"
#include "HorizonTweenEventWidgetVector2DParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetVector2DParameters : public FHorizonTweenEventTweenListImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> TweenStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> TweenEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenVector2DConstraints::Type> ConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizonTweenCoordinateSpace::Type> CoordinateSpaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomCurve CustomTweenCurve;
    
    FHorizonTweenEventWidgetVector2DParameters();
};

