#include "YTestActorWithMarker.h"
#include "YMapMarkerComponent.h"

AYTestActorWithMarker::AYTestActorWithMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_markerComponent = CreateDefaultSubobject<UYMapMarkerComponent>(TEXT("MarkerComponent"));
}


