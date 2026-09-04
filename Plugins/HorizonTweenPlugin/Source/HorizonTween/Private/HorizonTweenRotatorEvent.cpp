#include "HorizonTweenRotatorEvent.h"

UHorizonTweenRotatorEvent::UHorizonTweenRotatorEvent() {
}

FHorizonTweenEventRotatorParameters UHorizonTweenRotatorEvent::GetEventParamImpl() {
    return FHorizonTweenEventRotatorParameters{};
}

FRotator UHorizonTweenRotatorEvent::GetCurrentLerp() {
    return FRotator{};
}


