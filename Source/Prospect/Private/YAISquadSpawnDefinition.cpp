#include "YAISquadSpawnDefinition.h"

FYAISquadSpawnDefinition::FYAISquadSpawnDefinition() {
    this->m_roamingRadiusOverride = 0.0f;
    this->m_forcedResetRadius = 0.0f;
    this->m_purgeSquadOnceNoPlayerClose = false;
    this->m_spawnContextActor = NULL;
}

