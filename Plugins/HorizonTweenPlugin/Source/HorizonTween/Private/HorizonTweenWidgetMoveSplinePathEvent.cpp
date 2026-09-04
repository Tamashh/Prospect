#include "HorizonTweenWidgetMoveSplinePathEvent.h"

UHorizonTweenWidgetMoveSplinePathEvent::UHorizonTweenWidgetMoveSplinePathEvent() {
}

FHorizonTweenEventWidgetMoveSplinePathParameters UHorizonTweenWidgetMoveSplinePathEvent::GetEventParamImpl() {
    return FHorizonTweenEventWidgetMoveSplinePathParameters{};
}

float UHorizonTweenWidgetMoveSplinePathEvent::GetCurrentLerp() {
    return 0.0f;
}


