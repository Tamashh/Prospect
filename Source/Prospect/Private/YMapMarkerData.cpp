#include "YMapMarkerData.h"
#include "Net/UnrealNetwork.h"

UYMapMarkerData::UYMapMarkerData() {
    this->m_owner = NULL;
    this->m_cloakComponent = NULL;
    this->m_markerType = EYMapMarkerType::NONE;
    this->m_markerState = EYMapMarkerState::INACTIVE;
    this->m_markerWidgetClass = NULL;
    this->m_onlyRelevantToOwner = false;
    this->m_onlyRelevantToOwnerTeam = false;
    this->m_alwaysVisible = false;
    this->m_visibleDuringLobby = false;
    this->m_onlyRelevantInLobby = false;
    this->m_staysRelevantOnceDiscovered = false;
    this->m_centerMinimapOnThisMarker = false;
    this->m_shouldFollowActorPosition = true;
    this->m_onlyFollowActorPositionForAlly = true;
    this->m_autoRemoveWhenHealthEmpty = true;
    this->m_canChangeStateDuringEvacuation = false;
    this->m_timeLeft = 0.0f;
    this->m_timeOutDuration = 0.0f;
    this->m_hideFromOwner = false;
    this->m_ownerIsDead = false;
    this->m_distanceTowardsLocalPlayer = 0.0f;
    this->m_shouldShowLocalDistanceTowardsPlayer = false;
    this->m_visibilityDistance = 0;
    this->m_localEvaluationHandle = 0;
}

void UYMapMarkerData::OnRep_MarkerWidgetClass() {
}

void UYMapMarkerData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYMapMarkerData, m_owner);
    DOREPLIFETIME(UYMapMarkerData, m_forcedVisibilityPlayers);
    DOREPLIFETIME(UYMapMarkerData, m_markerType);
    DOREPLIFETIME(UYMapMarkerData, m_markerState);
    DOREPLIFETIME(UYMapMarkerData, m_markerTitle);
    DOREPLIFETIME(UYMapMarkerData, m_markerWidgetClass);
    DOREPLIFETIME(UYMapMarkerData, m_onlyRelevantToOwner);
    DOREPLIFETIME(UYMapMarkerData, m_onlyRelevantToOwnerTeam);
    DOREPLIFETIME(UYMapMarkerData, m_alwaysVisible);
    DOREPLIFETIME(UYMapMarkerData, m_visibleDuringLobby);
    DOREPLIFETIME(UYMapMarkerData, m_onlyRelevantInLobby);
    DOREPLIFETIME(UYMapMarkerData, m_staysRelevantOnceDiscovered);
    DOREPLIFETIME(UYMapMarkerData, m_centerMinimapOnThisMarker);
    DOREPLIFETIME(UYMapMarkerData, m_shouldFollowActorPosition);
    DOREPLIFETIME(UYMapMarkerData, m_onlyFollowActorPositionForAlly);
    DOREPLIFETIME(UYMapMarkerData, m_canChangeStateDuringEvacuation);
    DOREPLIFETIME(UYMapMarkerData, m_ownerIsDead);
    DOREPLIFETIME(UYMapMarkerData, m_shouldShowLocalDistanceTowardsPlayer);
    DOREPLIFETIME(UYMapMarkerData, m_visibilityDistance);
    DOREPLIFETIME(UYMapMarkerData, m_initialLocation);
}


