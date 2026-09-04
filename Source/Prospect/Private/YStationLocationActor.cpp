#include "YStationLocationActor.h"
#include "Components/ChildActorComponent.h"

AYStationLocationActor::AYStationLocationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_childActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActorComponent"));
    this->m_npcType = EYNPCType::Environment;
}


