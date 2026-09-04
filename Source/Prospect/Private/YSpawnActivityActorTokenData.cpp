#include "YSpawnActivityActorTokenData.h"

FYSpawnActivityActorTokenData::FYSpawnActivityActorTokenData() {
    this->m_activityType = EYActivityType::None;
    this->m_activityLocation = NULL;
    this->m_activityActorManager = NULL;
    this->m_actorClass = NULL;
    this->m_registerComponentOverride = NULL;
}

