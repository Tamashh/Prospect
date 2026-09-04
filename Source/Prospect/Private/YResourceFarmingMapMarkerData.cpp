#include "YResourceFarmingMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYResourceFarmingMapMarkerData::UYResourceFarmingMapMarkerData() {
    this->m_owningPlayer = NULL;
    this->m_previousOwner = NULL;
    this->m_showWarningForOwner = false;
    this->m_heatLevel = 0;
}

void UYResourceFarmingMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYResourceFarmingMapMarkerData, m_owningPlayer);
    DOREPLIFETIME(UYResourceFarmingMapMarkerData, m_previousOwner);
    DOREPLIFETIME(UYResourceFarmingMapMarkerData, m_showWarningForOwner);
    DOREPLIFETIME(UYResourceFarmingMapMarkerData, m_heatLevel);
}


