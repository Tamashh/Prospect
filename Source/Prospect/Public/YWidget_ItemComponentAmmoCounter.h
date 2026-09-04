#pragma once
#include "CoreMinimal.h"
#include "YUIWeaponAmmoData.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentAmmoCounter.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentAmmoCounter : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentAmmoCounter();

private:
    UFUNCTION(BlueprintCallable)
    void SetAmmoCounter(UYStateInventoryComponent* stateInventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetAmmoCounters(const FYUIWeaponAmmoData& ammoData);
    
};

