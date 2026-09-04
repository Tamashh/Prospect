#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceStatus.generated.h"

UENUM(BlueprintType)
enum class EYInsuranceStatus : uint8 {
    None,
    Pending,
    InsuredByOwnerInsideInventory,
    InsuredByOwnerOutsideInventory,
    InsuredByAnotherPlayer,
    InsuredBySquadmate,
};

