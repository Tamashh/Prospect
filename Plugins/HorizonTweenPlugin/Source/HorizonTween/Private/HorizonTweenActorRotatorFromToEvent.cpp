#include "HorizonTweenActorRotatorFromToEvent.h"

UHorizonTweenActorRotatorFromToEvent::UHorizonTweenActorRotatorFromToEvent() {
}

FHorizonTweenEventActorRotatorFromToParameters UHorizonTweenActorRotatorFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventActorRotatorFromToParameters{};
}

FRotator UHorizonTweenActorRotatorFromToEvent::GetCurrentLerp() {
    return FRotator{};
}


