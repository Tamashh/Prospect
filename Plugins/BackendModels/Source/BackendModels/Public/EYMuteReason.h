#pragma once
#include "CoreMinimal.h"
#include "EYMuteReason.generated.h"

UENUM(BlueprintType)
enum class EYMuteReason : uint8 {
    INAPROPRIATE_LANGUAGE,
    SPAM,
    HATE_SPEECH,
    PLAYER_ABUSE,
};

