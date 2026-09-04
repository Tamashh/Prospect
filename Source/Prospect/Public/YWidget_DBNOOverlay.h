#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_DBNOOverlay.generated.h"

class APawn;
class UYObjectInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_DBNOOverlay : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_DBNOOverlay();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReviveStatusChanged(UYObjectInteractionComponent* objectInteractionComponent, bool isBegingInteracted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDBNODeactivated(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnDBNOActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDBNOReviveTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDBNOReviveProgressPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReviveStatusChanged(bool isBeingRevived);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDBNOStateChanged(bool isInDBNO);
    
private:
    UFUNCTION(BlueprintCallable)
    void BindToLocalCharacter(APawn* oldPawn, APawn* newPawn);
    
};

