#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YCheatManagerExtension.h"
#include "YInventoryCheatManager.generated.h"

UCLASS(Blueprintable)
class UYInventoryCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYInventoryCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdatePlayerSet() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSaveLoadoutPreset(int32 loadoutPresetId);

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugRequestPlayerSet() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintInventoryByteSize();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugListUserCurrencies() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveWeaponWithVanity(FName weaponRowName, FName vanityRowName, FName charmRowName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveWeapon(FName weaponRowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveRandomWeapon() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveItem(EYItemType ItemType, FName RowName, int32 Amount, bool forceEquip) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveHelmet(const FName& helmetRowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveDevice(FName deviceRowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveBackpack(const FName& backpackRowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveArmor(const FName& armorRowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveAmmoType(const FName& RowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveAmmo(const FName& ammoRowName, const int32 Count) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugGiveAbility(FName RowName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddVanityToWeapon(const FString& weaponItemId, const FString& vanityId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugAddRandomMissingAmmoType() const;
    
};

