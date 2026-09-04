#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventWidgetMoveFromToParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetMoveFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetMoveFromToEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetMoveFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetMoveFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentLerp();
    
};

