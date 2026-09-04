#include "YDebugActivityLocationMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYDebugActivityLocationMapMarkerData::UYDebugActivityLocationMapMarkerData() {
    this->m_linkRadius = 0.0f;
    this->m_spawnRadiusOverride = -1.0f;
    this->m_activityType = EYActivityType::None;
    this->m_locationStatus = EYActivityLocationStatus::Free;
    this->m_currentScore = 0.0f;
    this->m_evaluationScoreThreshold = 0.0f;
    this->m_additionalDebugInfo = 0;
}

void UYDebugActivityLocationMapMarkerData::OnStatusChanged(AYActivityLocation* Location) {
}

void UYDebugActivityLocationMapMarkerData::OnEvaluated(AYActivityLocationLinked* locationLinked) {
}

void UYDebugActivityLocationMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_linkRadius);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_spawnRadiusOverride);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_activityType);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_locationStatus);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_currentScore);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_evaluationScoreThreshold);
    DOREPLIFETIME(UYDebugActivityLocationMapMarkerData, m_additionalDebugInfo);
}


