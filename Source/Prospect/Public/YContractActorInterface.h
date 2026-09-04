#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YContractActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYContractActorInterface : public UInterface {
    GENERATED_BODY()
};

class IYContractActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugDescription();
    
};

