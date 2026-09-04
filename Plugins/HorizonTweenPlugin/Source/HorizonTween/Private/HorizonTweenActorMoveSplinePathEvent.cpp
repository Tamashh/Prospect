#include "HorizonTweenActorMoveSplinePathEvent.h"

UHorizonTweenActorMoveSplinePathEvent::UHorizonTweenActorMoveSplinePathEvent() {
}

FHorizonTweenEventActorMoveSplinePathParameters UHorizonTweenActorMoveSplinePathEvent::GetEventParamImpl() {
    return FHorizonTweenEventActorMoveSplinePathParameters{};
}

float UHorizonTweenActorMoveSplinePathEvent::GetCurrentLerp() {
    return 0.0f;
}


