#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventSceneComponentMoveFromToParameters.h"
#include "HorizonTweenSceneComponentEvent.h"
#include "HorizonTweenSceneComponentMoveFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSceneComponentMoveFromToEvent : public UHorizonTweenSceneComponentEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSceneComponentMoveFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSceneComponentMoveFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLerp();
    
};

