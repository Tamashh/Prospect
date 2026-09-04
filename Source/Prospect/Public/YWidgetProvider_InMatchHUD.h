#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EYGameplayAttribute.h"
#include "EYPlayerSetType.h"
#include "Templates/SubclassOf.h"
#include "YAbilityStateInfo.h"
#include "YAbilityUIData.h"
#include "YAmmoUpdateInfo.h"
#include "YOnHealthStimStateChangedDelegate.h"
#include "YOnInventoryItemAddedDelegate.h"
#include "YStoredInventoryWeaponData.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_InMatchHUD.generated.h"

class AController;
class AYPickupActor;
class UYCharacterAbilityComponent;
class UYResourceComponent;
class UYStateInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable)
class UYWidgetProvider_InMatchHUD : public UYWidgetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemAdded InventoryItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnHealthStimStateChanged HealthStimStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> m_progressBarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStoredInventoryWeaponData> m_weaponsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAbilityUIData> m_abilitiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UYCharacterAbilityComponent>> m_healthStimAbilityClasses;
    
public:
    UYWidgetProvider_InMatchHUD();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnStateInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaChanged(UYResourceComponent* resourceComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnShieldChanged(UYResourceComponent* resourceComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReplicatedGPAModifierChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCollectedLoot(AController* Instigator, AYPickupActor* pickUpActor);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(UYResourceComponent* resourceComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGPAModifierChanged(EYGameplayAttribute Attribute, bool added, const FGuid& Guid);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged(const FYAmmoUpdateInfo& ammoUpdateInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityStateChanged(const FYAbilityStateInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilitiesChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemEquipped(EYPlayerSetType Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponData(int32 Index, FYStoredInventoryWeaponData& weapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToolData(int32 Index, FYStoredInventoryWeaponData& tool) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressBarData(const FName& DataName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWeaponIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAbilityData(int32 Index, FYAbilityUIData& abilityData) const;
    
};

