#include "HorizonTweenSceneComponentRotatorFromToEvent.h"

UHorizonTweenSceneComponentRotatorFromToEvent::UHorizonTweenSceneComponentRotatorFromToEvent() {
}

FHorizonTweenEventSceneComponentRotatorFromToParameters UHorizonTweenSceneComponentRotatorFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventSceneComponentRotatorFromToParameters{};
}

FRotator UHorizonTweenSceneComponentRotatorFromToEvent::GetCurrentLerp() {
    return FRotator{};
}


