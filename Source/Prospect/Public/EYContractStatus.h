#pragma once
#include "CoreMinimal.h"
#include "EYContractStatus.generated.h"

UENUM(BlueprintType)
enum class EYContractStatus : uint8 {
    Invalid,
    Locked,
    Inactive,
    Active,
    Completed,
    RewardsClaimed,
    Cancelled,
    MAX,
};

