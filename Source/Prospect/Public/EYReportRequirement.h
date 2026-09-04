#pragma once
#include "CoreMinimal.h"
#include "EYReportRequirement.generated.h"

UENUM(BlueprintType)
enum class EYReportRequirement : uint8 {
    Disabled,
    Optional,
    Required,
    MAX,
};

