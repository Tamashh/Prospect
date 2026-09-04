#include "YBossHuntMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYBossHuntMapMarkerData::UYBossHuntMapMarkerData() {
    this->m_stateDuration = 0.0f;
}

void UYBossHuntMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYBossHuntMapMarkerData, m_stateDuration);
}


