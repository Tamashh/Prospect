#include "YSkeletalMeshComponent.h"

UYSkeletalMeshComponent::UYSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_preventPhysicsStateCreationOnDedicatedServer = true;
}


