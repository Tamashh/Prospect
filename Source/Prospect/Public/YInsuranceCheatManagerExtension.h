#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YInsuranceCheatManagerExtension.generated.h"

UCLASS(Blueprintable)
class UYInsuranceCheatManagerExtension : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYInsuranceCheatManagerExtension();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdateInsurances();
    
};

