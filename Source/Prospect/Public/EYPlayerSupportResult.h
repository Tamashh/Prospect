#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSupportResult.generated.h"

UENUM(BlueprintType)
enum class EYPlayerSupportResult : uint8 {
    Succeeded,
    Failed,
    AlreadyReported,
    InvalidInput,
    ReportInProgress,
    Timeout,
    FeatureDisabled,
    BodyBelowMinCharacterCount,
    BodyExceedsMaxCharacterCount,
    InvalidReason,
    InvalidSubReason,
    NoPlayerToReport,
    NoUserToReport,
};

