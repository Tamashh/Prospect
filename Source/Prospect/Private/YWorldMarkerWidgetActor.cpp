#include "YWorldMarkerWidgetActor.h"
#include "YActorUIComponent.h"

AYWorldMarkerWidgetActor::AYWorldMarkerWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_actorUIComponent = CreateDefaultSubobject<UYActorUIComponent>(TEXT("YActorUIComponent"));
}

void AYWorldMarkerWidgetActor::InitializeMarker(FYWorldMarkerTypeData markerTypeData) {
}



