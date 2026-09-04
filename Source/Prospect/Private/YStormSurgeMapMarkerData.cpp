#include "YStormSurgeMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYStormSurgeMapMarkerData::UYStormSurgeMapMarkerData() {
    this->m_stateDuration = 0.0f;
}

void UYStormSurgeMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYStormSurgeMapMarkerData, m_stateDuration);
}


