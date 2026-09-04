#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YItemTooltipInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYItemTooltipInterface : public UInterface {
    GENERATED_BODY()
};

class IYItemTooltipInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearTooltipResources();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanClearTooltipResources();
    
};

