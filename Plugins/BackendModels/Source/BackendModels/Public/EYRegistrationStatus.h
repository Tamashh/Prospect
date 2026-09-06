#pragma once
#include "CoreMinimal.h"
#include "EYRegistrationStatus.generated.h"

UENUM(BlueprintType)
enum class EYRegistrationStatus : uint8 {
    NotRegistered,
    PendingConfirmation,
    Registered,
};
