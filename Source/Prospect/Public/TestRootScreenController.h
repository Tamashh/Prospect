#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestRootScreenController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestRootScreenController : public UActorComponent {
    GENERATED_BODY()
public:
    UTestRootScreenController(const FObjectInitializer& ObjectInitializer);

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

