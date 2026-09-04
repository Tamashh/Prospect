#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventActorScaleFromToParameters.h"
#include "HorizonTweenActorScaleFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenActorScaleFromToEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenActorScaleFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventActorScaleFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLerp();
    
};

