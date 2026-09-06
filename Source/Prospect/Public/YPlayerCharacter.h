#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Math/Rotator.h"
#include "Engine/DataTable.h"
#include "EYMeshViewState.h"
#include "EYStateChangeType.h"
#include "OnAbilityStateChangedDelegate.h"
#include "OnControllerChangedDelegate.h"
#include "OnIsPendingReconnectChangedDelegate.h"
#include "OnJumpedDelegate.h"
#include "OnMeshViewStateChangedDelegate.h"
#include "OnPutCharacterIntoPendingReconnectStateDelegate.h"
#include "YCharacter.h"
#include "YPlayerStateSetDelegateDelegate.h"
#include "YPlayerCharacter.generated.h"

class APlayerState;
class AYPlayerController;
class AYPlayerState;
class UArrowComponent;
class UBoxComponent;
class UCameraComponent;
class UPhysicalMaterial;
class USkeletalMeshComponent;
class UYArmorComponent;
class UYCharacterBagComponent;
class UYCharacterCustomizationComponent;
class UYCharacterEmoteComponent;
class UYCharacterLocationComponent;
class UYCommWheelVOComponent;
class UYFallingDamageComponent;
class UYFootstepComponent;
class UYLedgeClimbingComponent;
class UYMapMarkerComponent;
class UYObjectInteractionComponent;
class UYPlayerCharacterStateComponent;
class UYPlayerCharacterWeaponComponent;
class UYPlayerDropComponent;
class UYPlayerMovementComponent;
class UYStaminaComponent;

UCLASS(Blueprintable, Config=Engine)
class AYPlayerCharacter : public AYCharacter, public IGenericTeamAgentInterface, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isJumpInputEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxDistanceDBNOReviveInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxDistanceSocialInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_cameraComponentAttachName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMeshViewState m_overridenViewState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshViewStateChanged OnMeshViewStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_baseCollisionBoxExtentCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_baseCollisionBoxExtentCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_baseCollisionInitialRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_baseCollisionCrouchedRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_leftFoot_ZOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rightFoot_ZOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_leftFoot_RotOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rightFoot_RotOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hip_ZOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableIkFeetPlacementStation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPendingReconnect, meta=(AllowPrivateAccess=true))
    bool m_isPendingReconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsPendingReconnectChanged OnIsPendingReconnectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStateSetDelegate YOnPlayerStateSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumped BP_OnJumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_firstPersonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterWeaponComponent* m_characterWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_stateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMapMarkerComponent* m_markerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerController* m_associatedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYObjectInteractionComponent* m_interactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCommWheelVOComponent* m_commWheelVOComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerDropComponent* m_playerDropComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterEmoteComponent* m_emoteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterCustomizationComponent* m_characterCustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYFootstepComponent* m_footstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterBagComponent* m_characterBagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYArmorComponent* m_armorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerMovementComponent* m_playerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYLedgeClimbingComponent* m_ledgeClimbingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYFallingDamageComponent* m_fallingDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_cameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_weakAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_baseWeaponCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterLocationComponent* m_locationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_deatchCameraAnimationTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStaminaComponent* m_staminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_defaultPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_defaultWeakSpotPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_deathOutOfBoundsDamageType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_deathOutOfBoundsDamageCauser;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_deathOutOfBoundsDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerChanged BP_OnControllerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityStateChanged OnAbilityStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPutCharacterIntoPendingReconnectState OnPutCharacterIntoPendingReconnectState;
    
    AYPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void YSetPlayerState(APlayerState* State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdatePhysicalMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    void StopJumpInput();
    
    UFUNCTION(BlueprintCallable)
    void StartJumpInput();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseBoxCollision() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMeshViewState(EYMeshViewState viewState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentJumpCount(int32 jumpCount);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInitializationMeshViewState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPendingReconnect();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsPendingReconnectSet();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMeshInitialized();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArmorBrokenCallback(UYArmorComponent* armorComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStateChanged(EYStateChangeType stateChange);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Jumped(int32 jumpCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPendingTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDBNO() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerState* GetYPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerController* GetYPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYCharacterLocationComponent* GetLocationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostInitializeComponents();
    

    // Fix for true pure virtual functions not being implemented
};

