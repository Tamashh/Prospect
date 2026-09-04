#pragma once
#include "CoreMinimal.h"
#include "EYServicePingTypes.generated.h"

UENUM(BlueprintType)
enum class EYServicePingTypes : uint8 {
    Station,
    Matchmaking,
    MAX,
};

