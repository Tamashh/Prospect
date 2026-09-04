#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYWeaponTransportType.h"
#include "YHitSphereTraceEntry.h"
#include "YHitscanTraceEntry.h"
#include "YMeleeAttackComponent.generated.h"

class AActor;
class USkeletalMeshComponent;
class UYHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYMeleeAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeleeHitResultSignature, bool, hitSomething);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMeleeAttackStartedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cachedWeaponTransportHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cachedWeaponRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cachedImpactTransportHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYWeaponTransportType m_weaponTransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canExecuteOnAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canExecuteOnAutonomousProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canExecuteOnSimulatedProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableSphereTraceInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sphereTraceInterpolationIterations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeAttackStartedSignature OnMeleeAttackStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeHitResultSignature OnMeleeHitResultEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_cachedSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_actorsAlreadyHit;
    
public:
    UYMeleeAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSlomoFactor(float slomoFactor);
    
    UFUNCTION(BlueprintCallable)
    void StopMeleeAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireMeleeSphereHitTraceEntries(const TArray<FYHitSphereTraceEntry>& hitEntries);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireMeleeHitscanTraceEntries(const TArray<FYHitscanTraceEntry>& hitEntries);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeleeAttackData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHealthEmptyCallback(UYHealthComponent* inHealthComponent, AActor* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitiateMeleeAttack(const FName BoneName, USkeletalMeshComponent* inSkeletalMeshComponent, FDataTableRowHandle inWeaponTransport, FDataTableRowHandle weaponRowHandle);
    
};

