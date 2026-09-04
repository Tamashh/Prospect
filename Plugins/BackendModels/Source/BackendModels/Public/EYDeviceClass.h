#pragma once
#include "CoreMinimal.h"
#include "EYDeviceClass.generated.h"

UENUM(BlueprintType)
enum class EYDeviceClass : uint8 {
    None,
    Gadget,
    PrimaryWeapon,
    SecondaryWeapon,
    Tool,
    All,
    MAX,
};

