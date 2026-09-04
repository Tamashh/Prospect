#include "YTurretPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "YDamageComponent.h"
#include "YHealthComponent.h"

AYTurretPawn::AYTurretPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetUpdateFrequency = 5.0f;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->m_isSharingGlobalTurretAbilityActorLimit = false;
    this->m_cachedAssociatedPlayerState = NULL;
    this->m_capsuleComponent = (UCapsuleComponent*)RootComponent;
    this->m_meshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->m_healthComponent = CreateDefaultSubobject<UYHealthComponent>(TEXT("healthComponent"));
    this->m_damageComponent = CreateDefaultSubobject<UYDamageComponent>(TEXT("DamageComponent"));
    this->m_owningAIController = NULL;
    this->m_aimAtControllerTarget = true;
    this->m_interpAimRotation = true;
    this->m_aimRotationInterpSpeed = 5.0f;
    this->m_sightArc = 360.0f;
    this->m_sightRange = 3000.0f;
    this->m_turretState = EYTurretState::Deploying;
    this->m_meshComponent->SetupAttachment(RootComponent);
}

void AYTurretPawn::SetTurretState(EYTurretState newState) {
}

void AYTurretPawn::OnRep_TurretState() {
}

void AYTurretPawn::OnHealthEmpty(UYHealthComponent* healthComponent, AActor* instigatorActor) {
}

void AYTurretPawn::OnActorBeneathDestroyed(AActor* actorDestoyed) {
}

FDataTableRowHandle AYTurretPawn::GetWeaponTransportHandle() const {
    return FDataTableRowHandle{};
}

EYTurretState AYTurretPawn::GetTurretState() const {
    return EYTurretState::Deploying;
}

float AYTurretPawn::GetSightRange() const {
    return 0.0f;
}

float AYTurretPawn::GetSightArc() const {
    return 0.0f;
}

FVector AYTurretPawn::GetMuzzleLocation() const {
    return FVector{};
}

USkeletalMeshComponent* AYTurretPawn::GetMeshComponent() const {
    return NULL;
}

UYHealthComponent* AYTurretPawn::GetHealthComponent() const {
    return NULL;
}

FRotator AYTurretPawn::GetDesiredAimRotation() const {
    return FRotator{};
}

UYDamageComponent* AYTurretPawn::GetDamageComponent() const {
    return NULL;
}

UCapsuleComponent* AYTurretPawn::GetCapsuleComponent() const {
    return NULL;
}

FRotator AYTurretPawn::GetAimRotation() const {
    return FRotator{};
}

FDataTableRowHandle AYTurretPawn::GetAbilityHandle() const {
    return FDataTableRowHandle{};
}

void AYTurretPawn::FireWeapon(const FVector& Direction) {
}

void AYTurretPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYTurretPawn, m_cachedAssociatedPlayerState);
    DOREPLIFETIME(AYTurretPawn, m_desiredAimRotation);
    DOREPLIFETIME(AYTurretPawn, m_turretState);
}


