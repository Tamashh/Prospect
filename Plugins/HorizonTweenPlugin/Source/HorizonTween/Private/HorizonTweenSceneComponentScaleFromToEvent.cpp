#include "HorizonTweenSceneComponentScaleFromToEvent.h"

UHorizonTweenSceneComponentScaleFromToEvent::UHorizonTweenSceneComponentScaleFromToEvent() {
}

FHorizonTweenEventSceneComponentScaleFromToParameters UHorizonTweenSceneComponentScaleFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventSceneComponentScaleFromToParameters{};
}

FVector UHorizonTweenSceneComponentScaleFromToEvent::GetCurrentLerp() {
    return FVector{};
}


