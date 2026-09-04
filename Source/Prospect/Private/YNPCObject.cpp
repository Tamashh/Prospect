#include "YNPCObject.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AYNPCObject::AYNPCObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->m_rootComponent = (USceneComponent*)RootComponent;
    this->m_npcType = EYNPCType::Environment;
    this->m_shouldPlayVoiceOverOnInteraction = false;
    this->m_staticMesh->SetupAttachment(RootComponent);
}


