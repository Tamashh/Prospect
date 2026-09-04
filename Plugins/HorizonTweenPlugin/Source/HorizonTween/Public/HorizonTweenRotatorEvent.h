#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenBaseTypeEvent.h"
#include "HorizonTweenEventRotatorParameters.h"
#include "HorizonTweenRotatorEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenRotatorEvent : public UHorizonTweenBaseTypeEvent {
    GENERATED_BODY()
public:
    UHorizonTweenRotatorEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventRotatorParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentLerp();
    
};

