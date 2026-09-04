#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenBaseTypeEvent.h"
#include "HorizonTweenEventFloatParameters.h"
#include "HorizonTweenFloatEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenFloatEvent : public UHorizonTweenBaseTypeEvent {
    GENERATED_BODY()
public:
    UHorizonTweenFloatEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventFloatParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLerp();
    
};

