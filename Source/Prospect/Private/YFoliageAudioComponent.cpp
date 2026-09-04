#include "YFoliageAudioComponent.h"

UYFoliageAudioComponent::UYFoliageAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_minEffectTime = 0.200000003f;
    this->m_fadeOutDuration = 0.200000003f;
}

void UYFoliageAudioComponent::HandleOnFootstepPlayed(UPhysicalMaterial* PhysMaterial, TEnumAsByte<EPhysicalSurface> surfaceType) {
}


