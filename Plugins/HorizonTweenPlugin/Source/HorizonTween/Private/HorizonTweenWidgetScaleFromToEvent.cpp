#include "HorizonTweenWidgetScaleFromToEvent.h"

UHorizonTweenWidgetScaleFromToEvent::UHorizonTweenWidgetScaleFromToEvent() {
}

FHorizonTweenEventWidgetScaleFromToParameters UHorizonTweenWidgetScaleFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventWidgetScaleFromToParameters{};
}

FVector2D UHorizonTweenWidgetScaleFromToEvent::GetCurrentLerp() {
    return FVector2D{};
}


