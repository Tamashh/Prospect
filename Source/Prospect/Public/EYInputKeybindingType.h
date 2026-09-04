#pragma once
#include "CoreMinimal.h"
#include "EYInputKeybindingType.generated.h"

UENUM(BlueprintType)
enum class EYInputKeybindingType : uint8 {
    Primary,
    Secondary,
    Gamepad,
};

