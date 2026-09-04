#pragma once
#include "CoreMinimal.h"
#include "EYPlayerBattleEyeActionType.generated.h"

UENUM(BlueprintType)
enum class EYPlayerBattleEyeActionType : uint8 {
    Ban,
    Kick,
    UnBan,
    Message,
    Invalid,
};

