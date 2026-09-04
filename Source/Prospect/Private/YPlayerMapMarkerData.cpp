#include "YPlayerMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYPlayerMapMarkerData::UYPlayerMapMarkerData() {
    this->m_isDebugEnabled = false;
    this->m_isCloaked = false;
    this->m_associatedPlayerState = NULL;
}

void UYPlayerMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerMapMarkerData, m_isDebugEnabled);
    DOREPLIFETIME(UYPlayerMapMarkerData, m_isCloaked);
    DOREPLIFETIME(UYPlayerMapMarkerData, m_associatedPlayerState);
}


