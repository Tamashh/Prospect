#pragma once
#include "CoreMinimal.h"
#include "EYDeadDropDepositResult.generated.h"

UENUM(BlueprintType)
enum class EYDeadDropDepositResult : uint8 {
    UnknownError,
    Success,
    WrongItems,
    WrongDeadDropLocation,
    NoDeadDropContract,
    MAX,
};

