#include "HorizonTweenEventTransformParam.h"

FHorizonTweenEventTransformParam::FHorizonTweenEventTransformParam() {
    this->bSweep = false;
    this->bTeleport = false;
    this->bCollideAndFinishEvent = false;
    this->bCollideAndFinishEventTweenToEnd = false;
    this->CoordinateSpaceType = EHorizonTweenCoordinateSpace::Local;
}

