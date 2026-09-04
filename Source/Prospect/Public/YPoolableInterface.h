#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YPoolableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYPoolableInterface : public UInterface {
    GENERATED_BODY()
};

class IYPoolableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate();
    
};

