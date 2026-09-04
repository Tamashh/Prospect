#include "YControllerPlayerMapMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerPlayerMapMarkerComponent::UYControllerPlayerMapMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerPlayerMapMarkerComponent::OnUpdateMarkersEvacuationState(EYMapMarkerState newStateForMarkers) {
}

void UYControllerPlayerMapMarkerComponent::OnRep_MarkerData() {
}

void UYControllerPlayerMapMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerPlayerMapMarkerComponent, m_mapMarkerData);
}


