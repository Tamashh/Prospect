#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YPowerUpInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UYPowerUpInterface : public UInterface {
    GENERATED_BODY()
};

class IYPowerUpInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsUnpoweredBy(AActor* powerProvider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsPoweredBy(AActor* powerProvider);
    
};

