#include "YMatchPhaseVisualsOverrideVolume.h"

AYMatchPhaseVisualsOverrideVolume::AYMatchPhaseVisualsOverrideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->m_volumeBlendRadius = 500.0f;
}


