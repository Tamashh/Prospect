#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceClaimResult.generated.h"

UENUM(BlueprintType)
enum class EYInsuranceClaimResult : uint8 {
    Success,
    UnknownError,
    ClaimPending,
    NoAvailablePackage,
    StashFull,
};

