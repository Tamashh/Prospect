#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YResourceManagerRequestEntry.h"
#include "YResourceExecutionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYResourceExecutionInterface : public UInterface {
    GENERATED_BODY()
};

class IYResourceExecutionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteSpawnAction(const FYResourceManagerRequestEntry& Data);
    
};

