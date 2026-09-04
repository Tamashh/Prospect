#include "YAudioVolume.h"
#include "Components/AudioComponent.h"

AYAudioVolume::AYAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_interiorArea = false;
    this->m_soundClass = NULL;
    this->m_volumeMultiplier = 1.0f;
    this->m_pitchMultiplier = 1.0f;
    this->m_fadeInDuration = 0.200000003f;
    this->m_fadeVolumeLevel = 1.0f;
    this->m_fadeOutDuration = 0.200000003f;
    this->m_fadeOutVolumeLevel = 0.0f;
    this->m_audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->m_listeningPlayer = NULL;
    this->m_audioComponent->SetupAttachment(RootComponent);
}

void AYAudioVolume::HandleOnSoundLoaded() {
}

void AYAudioVolume::HandleOnListenerDied(UYCharacterDeathComponent* deathComponent) {
}

void AYAudioVolume::HandleOnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AYAudioVolume::HandleOnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


