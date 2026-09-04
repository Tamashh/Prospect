#include "YParticleSystemComponentFOV.h"

UYParticleSystemComponentFOV::UYParticleSystemComponentFOV(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultFOV = 80.0f;
    this->m_nearClipDistance = -1.0f;
    this->m_currentFOV = 80.0f;
    this->m_useCustomFOV = true;
}


