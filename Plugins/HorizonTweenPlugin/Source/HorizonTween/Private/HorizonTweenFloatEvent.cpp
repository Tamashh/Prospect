#include "HorizonTweenFloatEvent.h"

UHorizonTweenFloatEvent::UHorizonTweenFloatEvent() {
}

FHorizonTweenEventFloatParameters UHorizonTweenFloatEvent::GetEventParamImpl() {
    return FHorizonTweenEventFloatParameters{};
}

float UHorizonTweenFloatEvent::GetCurrentLerp() {
    return 0.0f;
}


