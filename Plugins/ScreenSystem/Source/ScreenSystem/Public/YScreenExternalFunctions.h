#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YScreenExternalFunctions.generated.h"

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYScreenExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYScreenExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableAlternativeUI();
    
};

