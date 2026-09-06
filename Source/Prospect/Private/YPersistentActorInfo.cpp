#include "YPersistentActorInfo.h"

UYPersistentActorInfo::UYPersistentActorInfo() {
    this->m_spawnRadiusSquare = 0.0f;
    this->m_despawnRadiusSquare = 0.0f;
    this->m_canEverDespawn = true;
    this->m_alwaysSpawn = false;
    this->m_actor = NULL;
    this->m_classToSpawn = NULL;
    this->m_shouldActorRespawn = true;
}

void UYPersistentActorInfo::Purge() {
}
