#include "StridePivot.h"

FStridePivot::FStridePivot() {
    this->bProjectToGround = false;
    this->Offset = 0.0f;
    this->StrideVectorMethod = EStrideVectorMethod::ManualVelocity;
    this->Smoothing = 0.0f;
    this->bChooseNearestAxis = false;
}

