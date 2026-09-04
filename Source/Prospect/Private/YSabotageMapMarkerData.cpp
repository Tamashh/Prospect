#include "YSabotageMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYSabotageMapMarkerData::UYSabotageMapMarkerData() {
    this->m_stateDuration = 0.0f;
}

void UYSabotageMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYSabotageMapMarkerData, m_stateDuration);
}


