#pragma once
#include "CoreMinimal.h"
#include "EYSortingRequestType.generated.h"

UENUM(BlueprintType)
enum class EYSortingRequestType : uint8 {
    None,
    Owned,
    FactionReputation,
};

