#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventSlateWidgetColorFromToParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSlateWidgetColorFromToParameters : public FHorizonTweenEventLinearColorParameters {
    GENERATED_BODY()
public:
    FHorizonTweenEventSlateWidgetColorFromToParameters();
};

