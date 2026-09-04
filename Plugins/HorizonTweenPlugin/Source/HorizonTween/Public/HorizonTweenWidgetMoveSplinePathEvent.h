#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetMoveSplinePathParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetMoveSplinePathEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetMoveSplinePathEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetMoveSplinePathEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetMoveSplinePathParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

