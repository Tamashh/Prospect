#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnActiveWeaponRemovedDelegate.h"
#include "OnWeaponAddedDelegate.h"
#include "OnWeaponDroppedDelegate.h"
#include "OnWeaponEntriesChangedDelegate.h"
#include "YActiveCustomizationData.h"
#include "YAmmoUpdateInfo.h"
#include "YInventoryItem.h"
#include "YStoredInventoryWeaponData.h"
#include "YStoredRuntimeWeaponInformation.h"
#include "YWeaponPlayerControllerInventoryComponent.generated.h"

class APawn;
class UYCharacterCosmeticVisualizationComponent;
class UYPlayerCharacterStateComponent;
class UYPlayerCharacterWeaponComponent;
class UYStateInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYWeaponPlayerControllerInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWeaponRemoved OnWeaponRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponAdded OnWeaponAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponDropped OnWeaponDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponEntriesChanged OnWeaponEntriesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterWeaponComponent* m_characterWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterCosmeticVisualizationComponent* m_cosmeticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StoredWeaponInformationUpdated, meta=(AllowPrivateAccess=true))
    TArray<FYStoredInventoryWeaponData> m_weaponEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_perksApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_attributesApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_meleeWeaponRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_pickAxeWeaponRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_permanentTools;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYStoredRuntimeWeaponInformation> m_storedRuntimeWeaponInformation;
    
public:
    UYWeaponPlayerControllerInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwitchWeapon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToMeleeWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SwitchPreviousWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SwitchNextWeapon();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipNewWeapon(int32 weaponIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddAndEquipItem(FDataTableRowHandle itemRowHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTransportComponentDestroyed(int32 transportHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredWeaponInformationUpdated() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnAssigned(APawn* oldPawn, APawn* newPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCustomizationDataUpdated(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh);
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged(const FYAmmoUpdateInfo& ammoUpdateInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsWeaponOwned(FDataTableRowHandle rowHandle, const FString& CustomId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponActive(FDataTableRowHandle rowHandle) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugAddMod(FDataTableRowHandle newMod);
    
};

