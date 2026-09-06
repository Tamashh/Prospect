#pragma once
#include "CoreMinimal.h"
#include "EYDeviceCategory.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYEquipedAnimationWeaponType.h"
#include "EYEquipedWeaponPoseType.h"
#include "EYWeaponPlayState.h"
#include "EYWeaponVisualState.h"
#include "OnNewWeaponAddedDelegate.h"
#include "OnVisualStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YCharacterAnimFirstPerson.h"
#include "YCharacterAnimThirdPerson.h"
#include "YFullscreenScopeData.h"
#include "YWeaponCompleteAnimationRuntimeDataSet.h"
#include "YPlayerCharacterWeaponComponent.generated.h"

class AActor;
class UAnimInstance;
class UAnimMontage;
class UAudioComponent;
class UMaterialParameterCollection;
class UMeshComponent;
class UObject;
class UParticleSystemComponent;
class UYHealthComponent;
class UYParticleSystemComponentFOV;
class UYSkeletalMeshComponentFOV;
class UYStaticMeshComponentFOV;
class UYWidgetComponentFOV;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerCharacterWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYWidgetComponentFOV* m_widgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWeaponCompleteAnimationRuntimeDataSet m_runtimeAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveDataTableRow, meta=(AllowPrivateAccess=true))
    FYActiveWeaponCharacterInitializationData m_activeInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveWeaponCharacterInitializationData m_previouslyActiveInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSkeletalMeshComponentFOV* m_weaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_spinUpWeaponSoundAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_weaponFiringSoundAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyMeleeSprintSlowdownMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewWeaponAdded OnNewWeaponAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYParticleSystemComponentFOV* m_fireParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStaticMeshComponentFOV* m_staticMeshChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_beamParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFullscreenScopeData m_fullscreenTargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_spinupParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_loadedWeaponAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYSkeletalMeshComponentFOV*> m_fovAffectedMeshFOVComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_weaponScopeParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_spinUpPercentageMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisualState, meta=(AllowPrivateAccess=true))
    EYWeaponVisualState m_visualState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVisualStateChanged OnVisualStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_missingAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimInstance*, UAnimMontage*> m_animationsAllowedToEarlyExit;
    
public:
    UYPlayerCharacterWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetChildStaticMesh(UYStaticMeshComponentFOV* StaticMesh);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPopulatePlayOutOfAmmoFX();
    
    UFUNCTION(BlueprintCallable)
    void ReattachWeaponMeshComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayReloadOutAnimation(const bool wasAmmoEmpty);
    
    UFUNCTION(BlueprintCallable)
    void PlayReloadLoopAnimation(const bool wasAmmoEmpty);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayEquipState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWeaponSpinup() const;
    
    UFUNCTION(BlueprintCallable)
    void OnStopWeaponSpinup(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopWeaponInspectState(bool wasInterrupted);

    UFUNCTION(BlueprintCallable)
    void OnStopTargeting(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopReloadAnimation(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopPlayPlayerAnimationPending(UAnimInstance* characterInstance, UAnimMontage* MontageToPlay) const;
    
    UFUNCTION(BlueprintCallable)
    void OnStopPlayAnimationPending(EYWeaponPlayState weaponState);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMeleeHeavy(bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMelee(bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopHiddenWeaponState(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStopFiring(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWeaponSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnStartWeaponSpinup();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnStartReloadAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnStartMeleeHeavy();
    
    UFUNCTION(BlueprintCallable)
    void OnStartMelee();
    
    UFUNCTION(BlueprintCallable)
    void OnStartHiddenWeaponState();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnSpinupPercentChanged(float newPercentage);
    
    UFUNCTION(BlueprintCallable)
    void OnSetTargetingWeaponFOV();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VisualState() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveDataTableRow();
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeAttackHitResult(bool hitSomething);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingWeapon(FYActiveWeaponCharacterInitializationData activeWeaponInitData, TArray<FSoftObjectPath> asyncLoadedPaths, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnClearReloadAnimationState();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayReloadState(EYWeaponPlayState weaponState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayOutOfAmmoFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFireEndpoint(FVector endpoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFire(bool dummyParameterForDemoReplayMuzzles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MeleeLooping();
    
    UFUNCTION(BlueprintCallable)
    void MeleeHeavyLooping();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAmmoEmpty() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnDeath(UYHealthComponent* healthComponent, AActor* Instigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYDeviceCategory GetEquippedWeaponDeviceCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYEquipedAnimationWeaponType GetEquipedWeaponType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYEquipedWeaponPoseType GetEquipedWeaponPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYCharacterAnimThirdPerson GetCharacterAnimThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYCharacterAnimFirstPerson GetCharacterAnimFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAnimInstance> GetCharacterAnimationAnimLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindUntargetingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindTargetingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindRetargetingMinimumNormalizedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindAllRelevantMeshes(TArray<UMeshComponent*>& OutComponents, bool includeBaseCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    void EarlyExitAnimNotify(UAnimInstance* AnimInstance, UAnimMontage* AnimMontage);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientForceUpdateEquippedWeapon();
    
};

