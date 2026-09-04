#include "HorizonTweenSceneComponentMoveFromToEvent.h"

UHorizonTweenSceneComponentMoveFromToEvent::UHorizonTweenSceneComponentMoveFromToEvent() {
}

FHorizonTweenEventSceneComponentMoveFromToParameters UHorizonTweenSceneComponentMoveFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventSceneComponentMoveFromToParameters{};
}

FVector UHorizonTweenSceneComponentMoveFromToEvent::GetCurrentLerp() {
    return FVector{};
}


