#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventActorColorFromToParameters.h"
#include "HorizonTweenActorColorFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenActorColorFromToEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenActorColorFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventActorColorFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentLerp();
    
};

