#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YCosmeticStringVisualizationRequest.h"
#include "YCosmeticStringVisualizationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYCosmeticStringVisualizationInterface : public UInterface {
    GENERATED_BODY()
};

class IYCosmeticStringVisualizationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteVisualizationAction(const FYCosmeticStringVisualizationRequest& Data);
    
};

