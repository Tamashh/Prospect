#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWeaponUIData.h"
#include "YWidget_InventorySlotItem.generated.h"

class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_InventorySlotItem : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_indexWeaponInventorySlot;
    
    UYWidget_InventorySlotItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponSlotData(const FText& weaponName, const FYWeaponUIData& uiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsWeaponSlotEquipped(bool isWeaponSlotEquipped);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveWeaponChanged(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearWeaponSlotData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowGearUpgrade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowGearEquip();
    
};

