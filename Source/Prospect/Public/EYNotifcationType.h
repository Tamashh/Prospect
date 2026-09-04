#pragma once
#include "CoreMinimal.h"
#include "EYNotifcationType.generated.h"

UENUM(BlueprintType)
enum class EYNotifcationType : uint8 {
    None,
    Invite,
    Message,
};

