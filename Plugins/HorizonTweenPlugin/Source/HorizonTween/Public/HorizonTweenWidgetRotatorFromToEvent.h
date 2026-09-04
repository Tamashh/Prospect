#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetRotatorFromToParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetRotatorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetRotatorFromToEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetRotatorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetRotatorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

