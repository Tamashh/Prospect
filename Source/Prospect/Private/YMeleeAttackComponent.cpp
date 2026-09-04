#include "YMeleeAttackComponent.h"

UYMeleeAttackComponent::UYMeleeAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_weaponTransportType = EYWeaponTransportType::Invalid;
    this->m_canExecuteOnAuthority = false;
    this->m_canExecuteOnAutonomousProxy = false;
    this->m_canExecuteOnSimulatedProxy = false;
    this->m_enableSphereTraceInterpolation = false;
    this->m_sphereTraceInterpolationIterations = 2;
    this->m_cachedSkeletalMeshComponent = NULL;
}

void UYMeleeAttackComponent::UpdateSlomoFactor(float slomoFactor) {
}

void UYMeleeAttackComponent::StopMeleeAttack() {
}

void UYMeleeAttackComponent::ServerFireMeleeSphereHitTraceEntries_Implementation(const TArray<FYHitSphereTraceEntry>& hitEntries) {
}
bool UYMeleeAttackComponent::ServerFireMeleeSphereHitTraceEntries_Validate(const TArray<FYHitSphereTraceEntry>& hitEntries) {
    return true;
}

void UYMeleeAttackComponent::ServerFireMeleeHitscanTraceEntries_Implementation(const TArray<FYHitscanTraceEntry>& hitEntries) {
}
bool UYMeleeAttackComponent::ServerFireMeleeHitscanTraceEntries_Validate(const TArray<FYHitscanTraceEntry>& hitEntries) {
    return true;
}

void UYMeleeAttackComponent::ResetMeleeAttackData() {
}

void UYMeleeAttackComponent::OnHealthEmptyCallback(UYHealthComponent* inHealthComponent, AActor* inInstigator) {
}

void UYMeleeAttackComponent::InitiateMeleeAttack(const FName BoneName, USkeletalMeshComponent* inSkeletalMeshComponent, FDataTableRowHandle inWeaponTransport, FDataTableRowHandle weaponRowHandle) {
}


