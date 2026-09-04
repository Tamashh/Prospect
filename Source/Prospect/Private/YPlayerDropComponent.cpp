#include "YPlayerDropComponent.h"

UYPlayerDropComponent::UYPlayerDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_offsetDropSpawnLocation = 20.0f;
    this->m_offsetDropLocationDistance = 120.0f;
    this->m_angleRotationOffsetPerItemDrop = 145.0f;
    this->m_maxTraceDistanceDown = 2500.0f;
    this->m_dropWeaponOnDeath = true;
    this->m_dropAbilityOnDeath = true;
    this->m_dropConsumablesOnDeath = true;
    this->m_dropAmmoOnDeath = true;
    this->m_corpseContainerToSpawn = NULL;
}

void UYPlayerDropComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYPlayerDropComponent::OnPreDeath() {
}

UYPlayerDropComponent* UYPlayerDropComponent::FindPlayerDropComponent(AActor* actorContext) {
    return NULL;
}

FTransform UYPlayerDropComponent::FindNextSpawnTransformForItem(FVector StartLocation) {
    return FTransform{};
}


