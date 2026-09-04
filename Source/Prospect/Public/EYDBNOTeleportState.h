#pragma once
#include "CoreMinimal.h"
#include "EYDBNOTeleportState.generated.h"

UENUM(BlueprintType)
enum class EYDBNOTeleportState : uint8 {
    None,
    Teleporting,
    TeleportCompleted,
};

