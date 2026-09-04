#include "YMapMarkerComponent.h"

UYMapMarkerComponent::UYMapMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->m_markerType = EYMapMarkerType::NONE;
    this->m_autoGenerateMarkerData = true;
    this->m_markerAlwaysVisible = false;
    this->m_visibleDuringLobby = false;
    this->m_onlyRelevantInLobby = false;
    this->m_onlyRelevantToOwner = false;
    this->m_onlyRelevantToOwnerTeam = false;
    this->m_staysRelevantOnceDiscovered = false;
    this->m_autoRemoveWhenHealthEmpty = true;
    this->m_canChangeStateDuringEvacuation = false;
    this->m_shouldFollowActorPosition = true;
    this->m_shouldShowLocalDistanceTowardsPlayer = false;
    this->m_onlyFollowActorPositionForAlly = true;
    this->m_isClientOnly = false;
    this->m_centerMinimapOnThisMarker = false;
    this->m_timeOutDuration = 0.0f;
    this->m_timeLeft = 0.0f;
    this->m_markerDataClass = NULL;
    this->m_overrideMarkerWidgetClass = false;
    this->m_markerWidgetClass = NULL;
    this->m_hideFromOwner = false;
    this->m_markerVisibilityDistance = 10000;
    this->m_markerData = NULL;
}

void UYMapMarkerComponent::SetMarkerTitle(FText Title) {
}

void UYMapMarkerComponent::SetMarkerState(EYMapMarkerState markerState) {
}

void UYMapMarkerComponent::RemoveForcedVisibilityForPlayer(APlayerController* Player) {
}

void UYMapMarkerComponent::ForceVisibilityForPlayer(APlayerController* Player) {
}

void UYMapMarkerComponent::CreateMarkerData() {
}


