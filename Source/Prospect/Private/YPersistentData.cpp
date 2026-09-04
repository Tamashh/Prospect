#include "YPersistentData.h"

UYPersistentData::UYPersistentData() {
    this->m_spawnRadiusSquare = 0.0f;
    this->m_despawnRadiusSquare = 0.0f;
    this->m_actor = NULL;
    this->m_classToSpawn = NULL;
    this->m_shouldActorRespawn = true;
    this->m_forceDespawn = false;
}

void UYPersistentData::SetPersistentDataToBePurged() {
}


