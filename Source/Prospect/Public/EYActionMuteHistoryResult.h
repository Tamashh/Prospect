#pragma once
#include "CoreMinimal.h"
#include "EYActionMuteHistoryResult.generated.h"

UENUM(BlueprintType)
enum class EYActionMuteHistoryResult : uint8 {
    Ok,
    Mute,
    SpecificUserMute,
};

