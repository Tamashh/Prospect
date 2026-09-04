#include "YLevelStreamingVolume.h"

AYLevelStreamingVolume::AYLevelStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bColored = true;
    this->m_levelStreamingManager = NULL;
}


