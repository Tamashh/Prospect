#pragma once
#include "CoreMinimal.h"
#include "EYSortingResultCode.generated.h"

UENUM(BlueprintType)
enum class EYSortingResultCode : uint8 {
    LessThen,
    Equal,
    GreaterThen,
};

