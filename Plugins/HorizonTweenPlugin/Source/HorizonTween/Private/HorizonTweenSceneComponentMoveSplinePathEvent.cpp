#include "HorizonTweenSceneComponentMoveSplinePathEvent.h"

UHorizonTweenSceneComponentMoveSplinePathEvent::UHorizonTweenSceneComponentMoveSplinePathEvent() {
}

FHorizonTweenEventSceneComponentMoveSplinePathParameters UHorizonTweenSceneComponentMoveSplinePathEvent::GetEventParamImpl() {
    return FHorizonTweenEventSceneComponentMoveSplinePathParameters{};
}

float UHorizonTweenSceneComponentMoveSplinePathEvent::GetCurrentLerp() {
    return 0.0f;
}


