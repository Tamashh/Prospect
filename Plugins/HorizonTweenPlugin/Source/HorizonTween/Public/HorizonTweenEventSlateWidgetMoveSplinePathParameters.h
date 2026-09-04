#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventSlateWidgetMoveSplinePathParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSlateWidgetMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenSheer;
    
    FHorizonTweenEventSlateWidgetMoveSplinePathParameters();
};

