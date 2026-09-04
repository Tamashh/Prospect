#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YScreenCommand.generated.h"

class UYScreenBase;

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYScreenCommand : public UObject {
    GENERATED_BODY()
public:
    UYScreenCommand();

    UFUNCTION(BlueprintCallable)
    void Execute(UYScreenBase* consumingScreen);
    
};

