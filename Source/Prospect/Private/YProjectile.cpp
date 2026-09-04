#include "YProjectile.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "YProjectileMovementComponent.h"
#include "YWeaponTransportComponent.h"

AYProjectile::AYProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->m_movementComponent = CreateDefaultSubobject<UYProjectileMovementComponent>(TEXT("YProjectileMovementComponent"));
    this->m_collisionComp = (USphereComponent*)RootComponent;
    this->m_particleComponent = NULL;
    this->m_destroyOnImpact = true;
    this->m_traceBehindDistanceOffset = 50.0f;
    this->m_traceToFindGround = false;
    this->m_drawTraceResult = false;
    this->m_isLockedOnHomingTarget = false;
    this->m_weaponTransportComponent = CreateDefaultSubobject<UYWeaponTransportComponent>(TEXT("WeaponTransportComponent"));
}

void AYProjectile::OnRetraceCollisionHit(const FHitResult& HitResult) {
}

void AYProjectile::OnRep_InitData() {
}

void AYProjectile::OnProjectileHitCollision(const FHitResult& HitResult) {
}

void AYProjectile::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AYProjectile::OnIgnoreInstigatorOrOwnerActorsChanged(const TArray<AActor*>& newIgnoreActors) {
}


void AYProjectile::ArmProjectile() {
}

void AYProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYProjectile, m_initData);
}


