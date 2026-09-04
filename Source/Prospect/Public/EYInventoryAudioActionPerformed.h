#pragma once
#include "CoreMinimal.h"
#include "EYInventoryAudioActionPerformed.generated.h"

UENUM(BlueprintType)
enum class EYInventoryAudioActionPerformed : uint8 {
    Moved,
    Swapped,
    Dropped,
    Attached,
};

