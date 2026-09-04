#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "YPoolableInterface.h"
#include "YProjectileInititalizationData.h"
#include "YProjectile.generated.h"

class UParticleSystemComponent;
class UProjectileMovementComponent;
class USphereComponent;
class UYWeaponTransportComponent;

UCLASS(Blueprintable)
class AYProjectile : public AActor, public IYPoolableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* m_movementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_collisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_particleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitData, meta=(AllowPrivateAccess=true))
    FYProjectileInititalizationData m_initData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_destroyOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_traceBehindDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_groundTraceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_traceToFindGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isLockedOnHomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponTransportComponent* m_weaponTransportComponent;
    
    AYProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRetraceCollisionHit(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitData();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileHitCollision(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIgnoreInstigatorOrOwnerActorsChanged(const TArray<AActor*>& newIgnoreActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void ArmProjectile();
    

    // Fix for true pure virtual functions not being implemented
};

