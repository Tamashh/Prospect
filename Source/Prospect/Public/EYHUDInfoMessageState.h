#pragma once
#include "CoreMinimal.h"
#include "EYHUDInfoMessageState.generated.h"

UENUM(BlueprintType)
enum class EYHUDInfoMessageState : uint8 {
    None,
    Active,
    Resting,
    Disabled,
    MAX,
};

