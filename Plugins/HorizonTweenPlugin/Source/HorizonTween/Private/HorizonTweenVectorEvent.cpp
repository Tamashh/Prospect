#include "HorizonTweenVectorEvent.h"

UHorizonTweenVectorEvent::UHorizonTweenVectorEvent() {
}

FHorizonTweenEventVectorParameters UHorizonTweenVectorEvent::GetEventParamImpl() {
    return FHorizonTweenEventVectorParameters{};
}

FVector UHorizonTweenVectorEvent::GetCurrentLerp() {
    return FVector{};
}


