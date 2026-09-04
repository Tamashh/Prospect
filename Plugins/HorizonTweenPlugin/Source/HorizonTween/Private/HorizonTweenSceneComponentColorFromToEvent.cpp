#include "HorizonTweenSceneComponentColorFromToEvent.h"

UHorizonTweenSceneComponentColorFromToEvent::UHorizonTweenSceneComponentColorFromToEvent() {
}

FHorizonTweenEventSceneComponentColorFromToParameters UHorizonTweenSceneComponentColorFromToEvent::GetEventParamImpl() {
    return FHorizonTweenEventSceneComponentColorFromToParameters{};
}

FLinearColor UHorizonTweenSceneComponentColorFromToEvent::GetCurrentLerp() {
    return FLinearColor{};
}


