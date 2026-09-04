#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YImpactEffectReceiverData.h"
#include "YImpactEffectReceiverInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYImpactEffectReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IYImpactEffectReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FYImpactEffectReceiverData GetCustomImpactEffectData();
    
};

