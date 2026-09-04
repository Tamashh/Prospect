#include "YVehicleMarkerData.h"
#include "Net/UnrealNetwork.h"

UYVehicleMarkerData::UYVehicleMarkerData() {
    this->m_owningActor = NULL;
    this->m_vehicleStateType = EYVehicleStateType::Invalid;
}

void UYVehicleMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYVehicleMarkerData, m_owningActor);
    DOREPLIFETIME(UYVehicleMarkerData, m_vehicleStateType);
}


