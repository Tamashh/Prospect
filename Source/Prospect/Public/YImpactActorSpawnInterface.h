#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YImpactInitializationData.h"
#include "YImpactActorSpawnInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYImpactActorSpawnInterface : public UInterface {
    GENERATED_BODY()
};

class IYImpactActorSpawnInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactInitializationData(const FYImpactInitializationData& initializationData);
    
};

