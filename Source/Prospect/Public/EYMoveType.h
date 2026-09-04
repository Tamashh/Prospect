#pragma once
#include "CoreMinimal.h"
#include "EYMoveType.generated.h"

UENUM(BlueprintType)
enum class EYMoveType : uint8 {
    None,
    Climb,
    Vault,
};

