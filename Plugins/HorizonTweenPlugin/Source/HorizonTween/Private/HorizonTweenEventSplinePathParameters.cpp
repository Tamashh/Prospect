#include "HorizonTweenEventSplinePathParameters.h"

FHorizonTweenEventSplinePathParameters::FHorizonTweenEventSplinePathParameters() {
    this->SplineComponent = NULL;
    this->bUseConstantVelocity = false;
    this->bTweenLocation = false;
    this->bTweenRotation = false;
    this->bTweenScale = false;
    this->LocationConstraintType = EHorizonTweenVectorConstraints::None;
    this->RotatorConstraintType = EHorizonTweenRotatorConstraints::None;
    this->ScaleConstraintType = EHorizonTweenVectorConstraints::None;
}

