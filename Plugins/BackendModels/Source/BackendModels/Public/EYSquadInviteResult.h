#pragma once
#include "CoreMinimal.h"
#include "EYSquadInviteResult.generated.h"

UENUM(BlueprintType)
enum class EYSquadInviteResult : uint8 {
    OK,
    TARGET_OFFLINE,
    INTERNAL_ERROR,
};

