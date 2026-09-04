#include "YDestructibleMeshComponent.h"

UYDestructibleMeshComponent::UYDestructibleMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UYDestructibleMeshComponent::GetRandomChunkLocation() {
    return FVector{};
}

int32 UYDestructibleMeshComponent::GetNumChunks() {
    return 0;
}


