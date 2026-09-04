#pragma once
#include "CoreMinimal.h"
#include "EYAutomationTestResult.generated.h"

UENUM(BlueprintType)
enum class EYAutomationTestResult : uint8 {
    Failed,
    Succeeded,
    Warning,
    Log,
};

