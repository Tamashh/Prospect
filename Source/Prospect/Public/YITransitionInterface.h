#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YITransitionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYITransitionInterface : public UInterface {
    GENERATED_BODY()
};

class IYITransitionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_StartTransition(float& outDuration);
    
};

