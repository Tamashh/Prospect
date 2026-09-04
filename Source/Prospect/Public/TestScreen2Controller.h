#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestScreen2Controller.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestScreen2Controller : public UActorComponent {
    GENERATED_BODY()
public:
    UTestScreen2Controller(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOpenScreenButton();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeftState();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCloseScreenButton();
    
};

