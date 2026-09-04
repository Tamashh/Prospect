#include "YCharacter.h"
#include "Net/UnrealNetwork.h"
#include "YCharacterDeathComponent.h"
#include "YDamageComponent.h"
#include "YGameplayAttributesComponent.h"
#include "YHealthComponent.h"
#include "YPerkComponent.h"

AYCharacter::AYCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shouldNeverUpdateNavigationTransform = true;
    this->m_healthComponent = CreateDefaultSubobject<UYHealthComponent>(TEXT("healthComponent"));
    this->m_damageComponent = CreateDefaultSubobject<UYDamageComponent>(TEXT("DamageComponent"));
    this->m_deathComponent = CreateDefaultSubobject<UYCharacterDeathComponent>(TEXT("deathComponent"));
    this->m_gameplayAttributesComponent = CreateDefaultSubobject<UYGameplayAttributesComponent>(TEXT("GameplayAttributesComponent"));
    this->m_perkComponent = CreateDefaultSubobject<UYPerkComponent>(TEXT("perkComponent"));
    this->bIsProning = false;
}

void AYCharacter::UnProne(bool bClientSimulation) {
}

void AYCharacter::SetAnimRootMotionTranslationScale(float NewScale) {
}

void AYCharacter::Prone(bool bClientSimulation) {
}

void AYCharacter::OnStartProne_Implementation(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}

void AYCharacter::OnRep_LedgeClimbingData(const FYReplicatedLedgeClimbingData& prevData) {
}

void AYCharacter::OnRep_IsProning() {
}

void AYCharacter::OnEndProne_Implementation(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}

void AYCharacter::MulticastPlayDatatableSound_Implementation(FDataTableRowHandle audioEventDataTableRow, bool onlyPlayOnSimulatedProxy) {
}

void AYCharacter::MoveRight(float InputValue) {
}

void AYCharacter::MoveForward(float InputValue) {
}

bool AYCharacter::IsFirstPerson() {
    return false;
}

UYPerkComponent* AYCharacter::GetPerkComponent() const {
    return NULL;
}

UYHealthComponent* AYCharacter::GetHealthComponent() const {
    return NULL;
}

UYGameplayAttributesComponent* AYCharacter::GetGameplayAttributesComponent() const {
    return NULL;
}

UYDamageComponent* AYCharacter::GetDamageComponent() const {
    return NULL;
}

FRotator AYCharacter::GetAimOffsets() const {
    return FRotator{};
}

USkeletalMeshComponent* AYCharacter::FindRelevantCharacterMesh(bool forceThirdPersonMesh) {
    return NULL;
}

void AYCharacter::FindAllRelevantMeshes(TArray<UMeshComponent*>& OutComponents) {
}

void AYCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYCharacter, bIsProning);
    DOREPLIFETIME(AYCharacter, m_ledgeClimbingData);
}


