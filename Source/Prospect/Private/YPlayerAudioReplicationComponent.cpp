#include "YPlayerAudioReplicationComponent.h"

UYPlayerAudioReplicationComponent::UYPlayerAudioReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlayerAudioReplicationComponent::ReplicateSoundToPlayers(UObject* Context, const FYSoundInfo& Info, float minReplicatingDistance, float maxReplicatingDistance) {
}

void UYPlayerAudioReplicationComponent::ClientPlaySoundInfo_Implementation(const FYSoundInfo& Sound) {
}
