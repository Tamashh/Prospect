#include "YMatchPhaseVisualsOverrideManager.h"

AYMatchPhaseVisualsOverrideManager::AYMatchPhaseVisualsOverrideManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bUseGlobalBlendRadius = false;
    this->m_blendRadius = 500.0f;
    this->m_closestVolumeBlendRadius = -1.0f;
    this->m_blendWeight = 0.0f;
    this->m_bIsPlayerInsideBlendRadius = false;
    this->m_bIsPlayerInsideVolume = false;
}


