#pragma once
#include "CoreMinimal.h"
#include "EYAIAnalyticsTrigger.generated.h"

UENUM(BlueprintType)
enum EYAIAnalyticsTrigger {
    Invalid,
    Died,
    Reset,
    KilledPlayer,
};

