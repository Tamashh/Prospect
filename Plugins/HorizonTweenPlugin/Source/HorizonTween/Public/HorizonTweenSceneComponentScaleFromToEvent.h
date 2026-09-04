#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventSceneComponentScaleFromToParameters.h"
#include "HorizonTweenSceneComponentEvent.h"
#include "HorizonTweenSceneComponentScaleFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSceneComponentScaleFromToEvent : public UHorizonTweenSceneComponentEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSceneComponentScaleFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSceneComponentScaleFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLerp();
    
};

