#include "YAISpawnRequest.h"

FYAISpawnRequest::FYAISpawnRequest() {
    this->m_status = EYSpawnRequestStatus::RequiresCharacter;
    this->m_character = NULL;
    this->m_squad = NULL;
}

