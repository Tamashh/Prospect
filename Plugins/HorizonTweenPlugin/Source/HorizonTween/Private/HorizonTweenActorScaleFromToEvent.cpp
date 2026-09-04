#include "HorizonTweenActorScaleFromToEvent.h"

UHorizonTweenActorScaleFromToEvent::UHorizonTweenActorScaleFromToEvent() {
}

FHorizonTweenEventActorScaleFromToParameters UHorizonTweenActorScaleFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventActorScaleFromToParameters{};
}

FVector UHorizonTweenActorScaleFromToEvent::GetCurrentLerp() {
    return FVector{};
}


