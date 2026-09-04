#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenEventSlateWidgetScaleFromToParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSlateWidgetScaleFromToParameters : public FHorizonTweenEventWidgetVector2DParameters {
    GENERATED_BODY()
public:
    FHorizonTweenEventSlateWidgetScaleFromToParameters();
};

