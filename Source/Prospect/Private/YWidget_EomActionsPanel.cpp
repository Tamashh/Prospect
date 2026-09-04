#include "YWidget_EomActionsPanel.h"

UYWidget_EomActionsPanel::UYWidget_EomActionsPanel() {
    this->m_matchmakingContextWidgetSwitcher = NULL;
    this->m_matchmakingQueuingTimeTimer = NULL;
    this->m_estimatedMmTimeContainer = NULL;
    this->m_estimatedMmTimeTextBlock = NULL;
    this->m_startMatchmakingButtonWidgetSwitcher = NULL;
    this->m_goToStationButton = NULL;
    this->m_startMatchmakingButton = NULL;
    this->m_cancelMatchmakingButton = NULL;
    this->m_matchmakingInfoText = NULL;
    this->m_goToStationTimer = NULL;
    this->m_delayBeforeTransitionToStation = 120.0f;
}

void UYWidget_EomActionsPanel::StopGoToStationTimer() const {
}

void UYWidget_EomActionsPanel::StartGoStationTimer() {
}

void UYWidget_EomActionsPanel::OnStartMatchmakingButtonClicked() {
}

void UYWidget_EomActionsPanel::OnRequeueingStateUpdated(const EYRequeueingState requeueingState) {
}

void UYWidget_EomActionsPanel::OnMatchStateUpdated(EYMatchState matchState) {
}

void UYWidget_EomActionsPanel::OnCancelMatchmakingButtonClicked() {
}

void UYWidget_EomActionsPanel::InitializeRequeuingState() {
}

void UYWidget_EomActionsPanel::HandleRequeueingAllowed() {
}

void UYWidget_EomActionsPanel::HandleQueueDisbanded(const FString& GameMode) {
}

void UYWidget_EomActionsPanel::HandlePlayerMatchedUpdate(bool isMatched) {
}

void UYWidget_EomActionsPanel::HandleMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds) {
}

void UYWidget_EomActionsPanel::HandleMatchmakingEstimatedTimeUpdated(float estimatedTime) const {
}

void UYWidget_EomActionsPanel::GoToStation() {
}



