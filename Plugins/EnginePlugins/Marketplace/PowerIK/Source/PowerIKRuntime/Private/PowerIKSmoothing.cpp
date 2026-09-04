#include "PowerIKSmoothing.h"

FPowerIKSmoothing::FPowerIKSmoothing() {
    this->SmoothPositionOverTime = false;
    this->MaxPositionSpeed = 0.0f;
    this->MaxPositionDistance = 0.0f;
    this->SmoothRotationOverTime = false;
    this->MaxDegreesSpeed = 0.0f;
    this->MaxDegreesDistance = 0.0f;
}

