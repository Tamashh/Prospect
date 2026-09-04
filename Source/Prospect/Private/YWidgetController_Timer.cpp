#include "YWidgetController_Timer.h"

UYWidgetController_Timer::UYWidgetController_Timer() {
    this->m_timerFirstDelay = -1.0f;
    this->m_timerUpdateRate = 1.0f;
    this->m_timerDurationInSeconds = 90.0f;
    this->m_countUpwards = false;
    this->m_timerDisplayType = EYTimerDisplayType::Custom;
}

void UYWidgetController_Timer::UpdateTimer() {
}

void UYWidgetController_Timer::StopTimer() {
}

void UYWidgetController_Timer::StartTimer(bool forceRestart, int32 StartOffset) {
}


