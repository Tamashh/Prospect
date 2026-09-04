#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YNavigationCommand.generated.h"

class AYPlayerController;

UCLASS(Blueprintable)
class UYNavigationCommand : public UObject {
    GENERATED_BODY()
public:
    UYNavigationCommand();

    UFUNCTION(BlueprintCallable)
    void Execute(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnExecute(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_IsAvailable(AYPlayerController* PlayerController);
    
};

