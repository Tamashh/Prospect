#include "HorizonTweenActorColorFromToEvent.h"

UHorizonTweenActorColorFromToEvent::UHorizonTweenActorColorFromToEvent() {
}

FHorizonTweenEventActorColorFromToParameters UHorizonTweenActorColorFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventActorColorFromToParameters{};
}

FLinearColor UHorizonTweenActorColorFromToEvent::GetCurrentLerp() {
    return FLinearColor{};
}


