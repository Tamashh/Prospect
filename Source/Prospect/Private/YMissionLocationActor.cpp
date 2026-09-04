#include "YMissionLocationActor.h"

AYMissionLocationActor::AYMissionLocationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->m_isAvailable = true;
}


