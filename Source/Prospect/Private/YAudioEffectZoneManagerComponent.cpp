#include "YAudioEffectZoneManagerComponent.h"

UYAudioEffectZoneManagerComponent::UYAudioEffectZoneManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_audioEffectZoneRadius = 300.0f;
    this->m_playerAudioZoneSampleRadius = 64.0f;
    this->m_debugDisplayEffectZones = false;
    this->m_debugDisplaySoundLocations = false;
}


