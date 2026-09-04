#pragma once
#include "CoreMinimal.h"
#include "EYUserSessionConnectionState.generated.h"

UENUM(BlueprintType)
enum class EYUserSessionConnectionState : uint8 {
    None,
    Registered,
    Left,
    MAX,
};

