#include "YWidget_MatchTimer.h"

UYWidget_MatchTimer::UYWidget_MatchTimer() {
    this->m_matchTimerTextBlock = NULL;
    this->m_exclusiveMatchState = EYMatchState::None;
}

void UYWidget_MatchTimer::OnMatchStateUpdated(EYMatchState newMatchState) {
}

void UYWidget_MatchTimer::HandleMatchTimerVisibility(bool newVisibility) {
}

void UYWidget_MatchTimer::HandleMatchTimerUpdate(int32 RemainingTime) {
}

void UYWidget_MatchTimer::HandleMatchTimerElapsed(EYMatchState elapsedMatchState) {
}




