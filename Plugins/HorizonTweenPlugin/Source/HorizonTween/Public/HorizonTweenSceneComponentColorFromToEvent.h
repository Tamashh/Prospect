#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventSceneComponentColorFromToParameters.h"
#include "HorizonTweenSceneComponentEvent.h"
#include "HorizonTweenSceneComponentColorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSceneComponentColorFromToEvent : public UHorizonTweenSceneComponentEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSceneComponentColorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSceneComponentColorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentLerp();
    
};

