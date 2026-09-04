#include "YVirtualCursorSettings.h"

UYVirtualCursorSettings::UYVirtualCursorSettings() {
    this->MaxSpeed = 2000.0f;
    this->MaxSpeedHover = 450.0f;
    this->DragCoefficient = 8.0f;
    this->DragCoefficientHover = 28.0f;
    this->MinSpeed = 5.0f;
    this->DeadZone = 0.150000006f;
    this->AccelerationMultiplier = 9000.0f;
    this->Size = 128.0f;
    this->MaxWidgetDepthToCheckForInteraction = 100;
}


