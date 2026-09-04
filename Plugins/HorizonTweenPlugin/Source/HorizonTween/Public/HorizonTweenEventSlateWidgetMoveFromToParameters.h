#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenEventSlateWidgetMoveFromToParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSlateWidgetMoveFromToParameters : public FHorizonTweenEventWidgetVector2DParameters {
    GENERATED_BODY()
public:
    FHorizonTweenEventSlateWidgetMoveFromToParameters();
};

