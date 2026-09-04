#include "HorizonTweenWidgetColorFromToEvent.h"

UHorizonTweenWidgetColorFromToEvent::UHorizonTweenWidgetColorFromToEvent() {
}

FHorizonTweenEventWidgetColorFromToParameters UHorizonTweenWidgetColorFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventWidgetColorFromToParameters{};
}

FLinearColor UHorizonTweenWidgetColorFromToEvent::GetCurrentLerp() {
    return FLinearColor{};
}


