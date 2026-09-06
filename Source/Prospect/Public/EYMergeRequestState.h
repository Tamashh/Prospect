#pragma once
#include "CoreMinimal.h"
#include "EYMergeRequestState.generated.h"

UENUM(BlueprintType)
enum class EYMergeRequestState : uint8 {
    None,
    InProgress,
    Finished,
};
