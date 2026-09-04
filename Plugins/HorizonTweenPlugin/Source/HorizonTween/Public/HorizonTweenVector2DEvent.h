#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenBaseTypeEvent.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenVector2DEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenVector2DEvent : public UHorizonTweenBaseTypeEvent {
    GENERATED_BODY()
public:
    UHorizonTweenVector2DEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventWidgetVector2DParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentLerp();
    
};

