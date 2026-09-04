#include "HorizonTweenActorMoveFromToEvent.h"

UHorizonTweenActorMoveFromToEvent::UHorizonTweenActorMoveFromToEvent() {
}

FHorizonTweenEventActorMoveFromToParameters UHorizonTweenActorMoveFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventActorMoveFromToParameters{};
}

FVector UHorizonTweenActorMoveFromToEvent::GetCurrentLerp() {
    return FVector{};
}


