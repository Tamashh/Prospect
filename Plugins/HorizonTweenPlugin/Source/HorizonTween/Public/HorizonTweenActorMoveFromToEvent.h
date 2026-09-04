#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventActorMoveFromToParameters.h"
#include "HorizonTweenActorMoveFromToEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenActorMoveFromToEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenActorMoveFromToEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventActorMoveFromToParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLerp();
    
};

