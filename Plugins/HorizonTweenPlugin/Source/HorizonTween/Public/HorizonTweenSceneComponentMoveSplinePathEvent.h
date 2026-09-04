#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventSceneComponentMoveSplinePathParameters.h"
#include "HorizonTweenSceneComponentEvent.h"
#include "HorizonTweenSceneComponentMoveSplinePathEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSceneComponentMoveSplinePathEvent : public UHorizonTweenSceneComponentEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSceneComponentMoveSplinePathEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSceneComponentMoveSplinePathParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

