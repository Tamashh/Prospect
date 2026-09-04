#include "HorizonTweenSplinePathEvent.h"

UHorizonTweenSplinePathEvent::UHorizonTweenSplinePathEvent() {
}

FHorizonTweenEventSplinePathParameters UHorizonTweenSplinePathEvent::GetEventParamImpl() {
    return FHorizonTweenEventSplinePathParameters{};
}

FVector UHorizonTweenSplinePathEvent::GetCurrentScale() {
    return FVector{};
}

FRotator UHorizonTweenSplinePathEvent::GetCurrentRotation() {
    return FRotator{};
}

FVector UHorizonTweenSplinePathEvent::GetCurrentLocation() {
    return FVector{};
}

float UHorizonTweenSplinePathEvent::GetCurrentLerp() {
    return 0.0f;
}


