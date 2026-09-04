#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenBaseTypeEvent.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenLinearColorEvent.generated.h"

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenLinearColorEvent : public UHorizonTweenBaseTypeEvent {
    GENERATED_BODY()
public:
    UHorizonTweenLinearColorEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHorizonTweenEventLinearColorParameters GetEventParamImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentLerp();
    
};

