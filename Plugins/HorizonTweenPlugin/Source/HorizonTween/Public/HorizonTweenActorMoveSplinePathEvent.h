#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventActorMoveSplinePathParameters.h"
#include "HorizonTweenActorMoveSplinePathEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenActorMoveSplinePathEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenActorMoveSplinePathEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventActorMoveSplinePathParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

