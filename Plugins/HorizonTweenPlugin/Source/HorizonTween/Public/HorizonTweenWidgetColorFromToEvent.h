#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventWidgetColorFromToParameters.h"
#include "HorizonTweenWidgetEvent.h"
#include "HorizonTweenWidgetColorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenWidgetColorFromToEvent : public UHorizonTweenWidgetEvent {
    GENERATED_BODY()
public:
    UHorizonTweenWidgetColorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetColorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentLerp();
    
};

