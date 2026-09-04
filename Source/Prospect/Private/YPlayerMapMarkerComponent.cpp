#include "YPlayerMapMarkerComponent.h"
#include "YPlayerMapMarkerData.h"

UYPlayerMapMarkerComponent::UYPlayerMapMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_markerDataClass = UYPlayerMapMarkerData::StaticClass();
}

void UYPlayerMapMarkerComponent::OnPlayerStateSet(AYPlayerState* PlayerState) {
}

void UYPlayerMapMarkerComponent::OnCloakChanged(bool IsCloaked) {
}


