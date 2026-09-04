#pragma once
#include "CoreMinimal.h"
#include "EYContractObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EYContractObjectiveType : uint8 {
    Invalid,
    Kills,
    OwnNumOfItem,
    DeadDrop,
    VisitArea,
    MAX,
};

