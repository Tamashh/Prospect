#pragma once
#include "CoreMinimal.h"
#include "EYRegistrationResult.generated.h"

UENUM(BlueprintType)
enum class EYRegistrationResult : uint8 {
    Error,
    EmailInvalid,
    LocaleInvalid,
    EmailInUse,
    Success,
};
