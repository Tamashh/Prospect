#pragma once
#include "CoreMinimal.h"
#include "EYRollbackCheckResult.generated.h"

UENUM(BlueprintType)
enum class EYRollbackCheckResult : uint8 {
    Invalid,
    NoRollbackNeeded,
    RollbackCompleted,
    RollbackCheckFailure,
    RollbackNoBackupsFoundFailure,
    RollbackApplyFailure,
    RollbackStoreFailure,
};

