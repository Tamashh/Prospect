#pragma once
#include "CoreMinimal.h"
#include "EYPlayerDataInitResult.generated.h"

UENUM(BlueprintType)
enum class EYPlayerDataInitResult : uint8 {
    Invalid,
    PlayerDataInitCompleted,
    PlayerDataInitFailure,
};

