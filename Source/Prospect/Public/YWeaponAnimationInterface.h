#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YWeaponAnimationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYWeaponAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class IYWeaponAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsInCustomizationMode(bool isInCustomizationMode);
    
};

