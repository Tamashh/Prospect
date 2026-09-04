#include "YCharacterDeathComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterDeathComponent::UYCharacterDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isExplodingOnDeath = false;
    this->m_minRagdollDuration = 10.0f;
    this->m_maxRagdollDuration = 30.0f;
    this->m_minDotRagdollCleanUp = 0.0f;
    this->m_minDistanceRagdollCleanUp = 1500.0f;
    this->m_freezeRagdollDelay = 5.0f;
    this->m_intervalRetryRagdollCleanUp = 1.0f;
    this->m_destroyOwnerDelay = 2.0f;
}

void UYCharacterDeathComponent::TryRagdollCleanUp() {
}

void UYCharacterDeathComponent::OnRep_Death() {
}

void UYCharacterDeathComponent::OnDestroySafetyTimerExpired() {
}

void UYCharacterDeathComponent::OnDeath_Authority(UYHealthComponent* healthComponent, AActor* Instigator) {
}

void UYCharacterDeathComponent::FreezeRagdoll() {
}

void UYCharacterDeathComponent::DestroyOwner() {
}

void UYCharacterDeathComponent::BlendToRagdollAndTriggerDestroy() {
}

void UYCharacterDeathComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterDeathComponent, m_deathInfo);
}


