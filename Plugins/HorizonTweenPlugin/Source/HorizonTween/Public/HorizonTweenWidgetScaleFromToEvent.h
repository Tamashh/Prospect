#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventWidgetScaleFromToParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetScaleFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetScaleFromToEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetScaleFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetScaleFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentLerp();
    
};

