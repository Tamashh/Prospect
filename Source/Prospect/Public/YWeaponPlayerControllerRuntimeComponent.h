#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "EYLootSourceType.h"
#include "EYPlayerSetType.h"
#include "EYPlayerStateBlueprint.h"
#include "EYStateChangeType.h"
#include "OnActiveWeaponChangedDelegate.h"
#include "OnAmmoChangedDelegate.h"
#include "OnDeviceSelectedDelegate.h"
#include "OnFinishedTargetingDelegate.h"
#include "OnModsChangeDelegate.h"
#include "OnReticleToggleChangedSignatureDelegate.h"
#include "OnSpinupProgressStateChangedDelegate.h"
#include "OnSwitchWeaponModeDelegate.h"
#include "OnWeaponCantBeFiredDelegate.h"
#include "OnWeaponFiredDelegate.h"
#include "OnWeaponRefireCooldownTimeChangedDelegate.h"
#include "OnWeaponRefireCooldownTimeFinishedDelegate.h"
#include "YDealtDamageData.h"
#include "YFireTransportEntry.h"
#include "YHitscanTraceEntry.h"
#include "YInventoryItem.h"
#include "YStoredModData.h"
#include "YStoredRuntimeWeaponInformation.h"
#include "YWeaponPlayerControllerRuntimeComponent.generated.h"

class APawn;
class USoundBase;
class UYControllerInventoryAbilityComponent;
class UYControllerStateInputComponent;
class UYGameplayAttributesComponent;
class UYMeleeAttackComponent;
class UYPerkComponent;
class UYPlayerCharacterStateComponent;
class UYPlayerCharacterWeaponComponent;
class UYPlayerDropComponent;
class UYPlayerMovementComponent;
class UYScriptableWeaponComponent;
class UYStaminaComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UYWeaponPlayerControllerRuntimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveWeaponStoredInformation, meta=(AllowPrivateAccess=true))
    FYStoredRuntimeWeaponInformation m_activeWeaponStoredInformation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StoredMods, meta=(AllowPrivateAccess=true))
    FYStoredModData m_weaponModsData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponTransportHandle, meta=(AllowPrivateAccess=true))
    int32 m_weaponTransportHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ammoInClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ammoConsumptionPendingInPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ammoTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_activeWeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_selectedToolItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_selectedConsumableItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_shootingDirection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWeaponChanged OnActiveWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoChanged OnAmmoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModsChange OnStoredModsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinupProgressStateChanged OnSpinupPercentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFired OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponCantBeFired OnWeaponCantBeFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponRefireCooldownTimeChanged OnWeaponRefireCooldownTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponRefireCooldownTimeFinished OnWeaponRefireCooldownTimeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceSelected BP_OnSelectedToolChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceSelected BP_OnSelectedConsumableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedTargeting OnFinishedTargetingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchWeaponMode BP_OnSwitchWeaponMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReticleToggleChangedSignature OnReticleToggleChangedEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_aimingAtHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterWeaponComponent* m_characterWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerMovementComponent* m_characterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerStateInputComponent* m_controllerInputStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStaminaComponent* m_characterStaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMeleeAttackComponent* m_characterMeleeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryAbilityComponent* m_controllerAbilityComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxFovConsideredAsScoped;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_adsSensitivityMultiplierScaling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scopedSensitivityMultiplierScaling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minTimeIntervalAllowedBetweenFireRPCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_characterGPAComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPerkComponent* m_characterPerkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYScriptableWeaponComponent* m_ScriptableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_locallyWeaponTransportHandleUsed;
    
public:
    UYWeaponPlayerControllerRuntimeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TryFireNewBurstShot();
    
private:
    UFUNCTION(BlueprintCallable)
    void TimestampValidationTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartMeleeHeavySpinup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCrosshairTrackSocketRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void SetReticleDisabled(bool newState);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireWeaponWithSeed(const TArray<FYFireTransportEntry>& fireWeaponTransportEntry, int32 randomSeed, float timestampClient, float timestampServer, const TArray<FVector_NetQuantize>& Vectors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireHitscanResults(const TArray<FYHitscanTraceEntry>& traceEntries, float timestampClient, float timestampServer);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReloadReleaseInput();
    
    UFUNCTION(BlueprintCallable)
    void ReloadInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTransportComponentDestroyed(int32 transportHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamageCallback(const FYDealtDamageData& dealtDamageData);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStopTargeting(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopSpinning(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopSliding(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopReloadingAmmo(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopReloading(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMeleeHeavy(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMelee(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopFiring(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWeaponSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnStartSliding();
    
    UFUNCTION(BlueprintCallable)
    void OnStartReloadingAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnStartReloading();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnSprintingStateActivated();

    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponTransportHandle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredMods();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalRemainingAmmo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveWeaponStoredInformation();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPerksChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnAssigned(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeAttackFinished() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDroppedCallback(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdate(UYStateInventoryComponent* inventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInventoryStateActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnInputModeChanged(bool isUIOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAmmoReloading() const;
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStateChanged(EYStateChangeType stateChange, const TArray<EYPlayerStateBlueprint>& statesThatChanged);
    
    UFUNCTION(BlueprintCallable)
    void MeleeReFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeting() const;

    UFUNCTION(BlueprintCallable)
    void InspectReleaseInput();

    UFUNCTION(BlueprintCallable)
    void InspectInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HideGunWhileFinishedTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldCrosshairTrackSocketLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWeaponUseCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCurrentShootAtSocketLocationAndRotationPreTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCurrentShootAtSocketLocationAndRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentPawnCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentPawnCameraForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCurrentActiveWeaponRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocationPreTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAppliedRecoilForWeaponAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAppliedRecoilForUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetAISenseOnFired() const;
    
    UFUNCTION(BlueprintCallable)
    void FireWeaponReleaseInput();
    
    UFUNCTION(BlueprintCallable)
    void FireWeaponInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FireWeaponAfterFireDelay();
    
private:
    UFUNCTION(BlueprintCallable)
    void FireRateHackTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool FireMeleeWeaponInputInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle FindActiveWeaponHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FillUpSingleBullet();
    
    UFUNCTION(BlueprintCallable)
    void FillUpAmmo(const FString& callerContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> DetermineScannableRowHandles() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayWeaponSound(const TSoftObjectPtr<USoundBase>& weaponSound, UYPlayerCharacterWeaponComponent* weaponComponent);
    
};

