#include "YAudioEffectZoneComponent.h"

UYAudioEffectZoneComponent::UYAudioEffectZoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_boundsType = EYAudioEffectZoneBoundsType::Sphere;
}


