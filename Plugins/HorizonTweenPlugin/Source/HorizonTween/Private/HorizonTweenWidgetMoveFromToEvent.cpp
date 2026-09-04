#include "HorizonTweenWidgetMoveFromToEvent.h"

UHorizonTweenWidgetMoveFromToEvent::UHorizonTweenWidgetMoveFromToEvent() {
}

FHorizonTweenEventWidgetMoveFromToParameters UHorizonTweenWidgetMoveFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventWidgetMoveFromToParameters{};
}

FVector2D UHorizonTweenWidgetMoveFromToEvent::GetCurrentLerp() {
    return FVector2D{};
}


