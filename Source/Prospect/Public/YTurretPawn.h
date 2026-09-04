#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/Pawn.h"
#include "EYTurretState.h"
#include "YImpactActorSpawnInterface.h"
#include "YTurretPawn.generated.h"

class AActor;
class AYAITurretController;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UYDamageComponent;
class UYHealthComponent;

UCLASS(Blueprintable)
class AYTurretPawn : public APawn, public IGenericTeamAgentInterface, public IYImpactActorSpawnInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTurretStateChangedSignature, EYTurretState, newState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTurretFiredWeaponSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTurretDestroyedSignature, AActor*, instigatorActor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSharingGlobalTurretAbilityActorLimit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurretDestroyedSignature TurretDestroyedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurretFiredWeaponSignature TurretFiredWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurretStateChangedSignature TurretStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* m_cachedAssociatedPlayerState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_capsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_meshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYAITurretController* m_owningAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_aimAtControllerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_currentAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator m_desiredAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_interpAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aimRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sightArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_targetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TurretState, meta=(AllowPrivateAccess=true))
    EYTurretState m_turretState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weaponTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_muzzleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_abilityRowHandle;
    
public:
    AYTurretPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTurretState(EYTurretState newState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TurretState();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthEmpty(UYHealthComponent* healthComponent, AActor* instigatorActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActorBeneathDestroyed(AActor* actorDestoyed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetWeaponTransportHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYTurretState GetTurretState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSightArc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMuzzleLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredAimRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetCapsuleComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetAbilityHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void FireWeapon(const FVector& Direction);
    

    // Fix for true pure virtual functions not being implemented
};

