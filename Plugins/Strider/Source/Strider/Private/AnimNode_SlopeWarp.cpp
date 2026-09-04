#include "AnimNode_SlopeWarp.h"

FAnimNode_SlopeWarp::FAnimNode_SlopeWarp() {
    this->SlopeDetectionMode = ESlopeDetectionMode::ManualSlope;
    this->SlopeRollCompensation = ESlopeRollCompensation::None;
    this->MaxSlopeAngle = 0.0f;
    this->HeightOffset = 0.0f;
    this->SlopeSmoothingRate = 0.0f;
    this->AllowExtensionPercent = 0.0f;
    this->DownSlopeShiftRate = 0.0f;
}

