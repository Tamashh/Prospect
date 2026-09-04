#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenBaseTypeEvent.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenVectorEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenVectorEvent : public UHorizonTweenBaseTypeEvent {
    GENERATED_BODY()
public:
    UHorizonTweenVectorEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventVectorParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentLerp();
    
};

