#include "YDamageComponent.h"
#include "Net/UnrealNetwork.h"

UYDamageComponent::UYDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_canBeAggroedByAI = true;
    this->m_damageComponentType = EYDamageComponentType::Normal;
    this->m_hitFlashDelta = 0.0f;
    this->m_lastTimeTakeDamage = 0.0f;
    this->m_lastTimeTakeDamageLocallyControlledActor = 0.0f;
    this->m_lastTimeDealtDamage = 0.0f;
    this->m_lastTimeDealtPlayerDamage = -1.0f;
    this->m_lastTimeAIMeleeAttackPerformed = -1000.0f;
    this->m_canBeDamaged = true;
    this->m_godmodeActivated = false;
    this->m_canBeDamagedByPlayers = true;
    this->m_canBeDamagedByAI = true;
    this->m_canBeDamagedByTurrets = true;
    this->m_canOnlyBeDamageByFilteredTypes = false;
    this->m_relevantForKillFeed = false;
    this->m_relevantPerkOnKill = false;
    this->m_produceHitFeedback = true;
    this->m_canBeHealedRegardlessOfTeam = false;
    this->m_canHealRegardlessOfTeam = false;
    this->m_canEverBeHealed = true;
    this->m_isDotActive = false;
    this->m_hitFlashActive = false;
    this->m_alwaysShowDamageNumbers = false;
}

void UYDamageComponent::SetWeakspotsRowHandle(const FDataTableRowHandle& rowHandle) {
}

void UYDamageComponent::SetHitflashComponents(const TArray<UMeshComponent*>& MeshComponents) {
}

void UYDamageComponent::RemoveActorToIgnoreDamage(AActor* actorToIgnore, AActor* ownerWithComponent) {
}

void UYDamageComponent::OnRep_DotActive() const {
}

void UYDamageComponent::OnRep_ActorToIgnoreDamage() const {
}

void UYDamageComponent::MulticastTookDamage_Implementation(FYDealtDamageData Data) {
}

void UYDamageComponent::MulticastDealDamage_Implementation(FYDealtDamageData Data) {
}

void UYDamageComponent::AddActorToIgnoreDamage(AActor* actorToIgnore, AActor* ownerWithComponent) {
}

void UYDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYDamageComponent, m_actorsToIgnoreDamage);
    DOREPLIFETIME(UYDamageComponent, m_canBeDamaged);
    DOREPLIFETIME(UYDamageComponent, m_godmodeActivated);
    DOREPLIFETIME(UYDamageComponent, m_canBeDamagedByTurrets);
    DOREPLIFETIME(UYDamageComponent, m_canOnlyBeDamageByFilteredTypes);
    DOREPLIFETIME(UYDamageComponent, m_isDotActive);
}


