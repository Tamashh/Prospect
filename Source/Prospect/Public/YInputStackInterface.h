#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YInputStackInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYInputStackInterface : public UInterface {
    GENERATED_BODY()
};

class IYInputStackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 EvaluateStackPop();
    
};

