#pragma once
#include "CoreMinimal.h"
#include "EYClientStationRequestResult.generated.h"

UENUM(BlueprintType)
enum class EYClientStationRequestResult : uint8 {
    INVALID_USERI_ID,
    UNKNOWN,
    PENDING,
    TRAVEL_SINGLEPLAYER,
    OK,
};

