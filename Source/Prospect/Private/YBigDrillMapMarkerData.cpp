#include "YBigDrillMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYBigDrillMapMarkerData::UYBigDrillMapMarkerData() {
    this->m_stateDuration = 0.0f;
    this->m_owningPlayer = NULL;
    this->m_isOnlyLocationMarker = false;
}

void UYBigDrillMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYBigDrillMapMarkerData, m_stateDuration);
    DOREPLIFETIME(UYBigDrillMapMarkerData, m_owningPlayer);
    DOREPLIFETIME(UYBigDrillMapMarkerData, m_isOnlyLocationMarker);
}


