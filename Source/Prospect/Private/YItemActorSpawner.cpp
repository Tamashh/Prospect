#include "YItemActorSpawner.h"
#include "YPickupActor.h"

UYItemActorSpawner::UYItemActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultPickupActorClass = AYPickupActor::StaticClass();
}

AYPickupActor* UYItemActorSpawner::SpawnSpecificLootItem(UObject* contextObject, const FDataTableRowHandle& pickupItem, const FTransform& SpawnTransform, const TArray<FDataTableRowHandle>& modsToAdd, int32 Amount, bool adjustSpawnLocationToGround, FVector spawnVelocity, bool forceProjectileMovement, bool forceDisableInitialScaling, EYLootSourceType lootType, UObject* instigatorObject, float spawnNavmeshRadiusMin, float spawnNavmeshRadiusMax) {
    return NULL;
}

bool UYItemActorSpawner::SpawnMoneyDrop(const FDataTableRowHandle& pickupItem, ACharacter* Instigator, const FTransform& SpawnTransform, int32 Amount, EYLootSourceType Type, FVector Velocity) {
    return false;
}

UYItemActorSpawner* UYItemActorSpawner::GetItemActorSpawner(UObject* WorldContext) {
    return NULL;
}


