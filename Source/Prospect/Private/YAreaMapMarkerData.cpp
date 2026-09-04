#include "YAreaMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYAreaMapMarkerData::UYAreaMapMarkerData() {
    this->m_searchRadius = 5000.0f;
    this->m_randAngleRad = 0.0f;
    this->m_randRadius = 0.0f;
}

void UYAreaMapMarkerData::SetSearchRadius(const float Radius) {
}

float UYAreaMapMarkerData::GetSearchRadius() const {
    return 0.0f;
}

FVector2D UYAreaMapMarkerData::GetRandomizedScreenOffset(const float mapScaleValue) const {
    return FVector2D{};
}

void UYAreaMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYAreaMapMarkerData, m_searchRadius);
    DOREPLIFETIME(UYAreaMapMarkerData, m_randAngleRad);
    DOREPLIFETIME(UYAreaMapMarkerData, m_randRadius);
}


