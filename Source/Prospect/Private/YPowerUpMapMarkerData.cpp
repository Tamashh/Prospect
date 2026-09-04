#include "YPowerUpMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYPowerUpMapMarkerData::UYPowerUpMapMarkerData() {
    this->m_powerUpProgress = 0;
    this->m_powerUpSteps = 3;
}

void UYPowerUpMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPowerUpMapMarkerData, m_powerUpProgress);
    DOREPLIFETIME(UYPowerUpMapMarkerData, m_powerUpSteps);
    DOREPLIFETIME(UYPowerUpMapMarkerData, m_powerUpText);
}


