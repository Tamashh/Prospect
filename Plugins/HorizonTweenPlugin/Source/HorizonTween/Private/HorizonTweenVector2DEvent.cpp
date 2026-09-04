#include "HorizonTweenVector2DEvent.h"

UHorizonTweenVector2DEvent::UHorizonTweenVector2DEvent() {
}

FHorizonTweenEventWidgetVector2DParameters UHorizonTweenVector2DEvent::GetEventParamImpl() {
    return FHorizonTweenEventWidgetVector2DParameters{};
}

FVector2D UHorizonTweenVector2DEvent::GetCurrentLerp() {
    return FVector2D{};
}


