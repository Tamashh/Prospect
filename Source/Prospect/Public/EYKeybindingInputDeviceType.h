#pragma once
#include "CoreMinimal.h"
#include "EYKeybindingInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EYKeybindingInputDeviceType : uint8 {
    None,
    Keyboard,
    GamepadGeneric,
    PS4,
    XB1,
    PS5,
    XBS,
};

