#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventActorRotatorFromToParameters.h"
#include "HorizonTweenActorRotatorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenActorRotatorFromToEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenActorRotatorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventActorRotatorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentLerp();
    
};

