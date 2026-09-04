#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYPlayerSetType.h"
#include "YAmmoUpdateInfo.h"
#include "YInventoryItem.h"
#include "YWidget_Ammo.generated.h"

class APlayerState;
class UTextBlock;
class UYStateInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Ammo : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_ammoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_activeWeaponText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_activeWeaponRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ammoString;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_weaponControllerRuntimeComponent;
    
public:
    UYWidget_Ammo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(APlayerState* State);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& inventoryItem, EYPlayerSetType equippedPlayerSetType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAmmoChanged(const FYAmmoUpdateInfo& ammoUpdateInfo);
    
};

