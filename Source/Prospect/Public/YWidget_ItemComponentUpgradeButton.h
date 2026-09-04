#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentUpgradeButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentUpgradeButton : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGotEnoughResourcesForAction);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGotEnoughResourcesForAction OnGotEnoughResourcesForUpgrade;
    
public:
    UYWidget_ItemComponentUpgradeButton();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ButtonClicked() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetButtonStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetButtonStatus();
    
};

