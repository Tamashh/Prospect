#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenActorEvent.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenSplinePathEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSplinePathEvent : public UHorizonTweenActorEvent {
    GENERATED_BODY()
public:
    UHorizonTweenSplinePathEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventSplinePathParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

