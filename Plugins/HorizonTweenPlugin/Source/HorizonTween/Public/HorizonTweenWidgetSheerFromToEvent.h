#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventWidgetSheerFromToParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetSheerFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetSheerFromToEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetSheerFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetSheerFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentLerp();
    
};

