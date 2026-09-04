#pragma once
#include "CoreMinimal.h"
#include "EYClaimGrantState.generated.h"

UENUM(BlueprintType)
enum class EYClaimGrantState : uint8 {
    UNCLAIMED,
    BEING_CLAIMED,
    CLAIMED,
};

