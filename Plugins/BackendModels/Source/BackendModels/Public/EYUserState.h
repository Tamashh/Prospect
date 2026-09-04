#pragma once
#include "CoreMinimal.h"
#include "EYUserState.generated.h"

UENUM(BlueprintType)
enum class EYUserState : uint8 {
    IN_STATION,
    IN_MATCH,
    Offline,
};

