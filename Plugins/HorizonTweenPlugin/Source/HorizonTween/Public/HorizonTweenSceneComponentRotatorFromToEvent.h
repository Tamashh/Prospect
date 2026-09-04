#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventSceneComponentRotatorFromToParameters.h"
#include "HorizonTweenSceneComponentEvent.h"
#include "HorizonTweenSceneComponentRotatorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSceneComponentRotatorFromToEvent : public UHorizonTweenSceneComponentEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSceneComponentRotatorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSceneComponentRotatorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentLerp();
    
};

