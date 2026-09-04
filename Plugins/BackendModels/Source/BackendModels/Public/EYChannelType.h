#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.generated.h"

UENUM(BlueprintType)
enum class EYChannelType : uint8 {
    NONE,
    SYSTEM,
    GLOBAL,
    WHISPER,
    SQUAD,
    TEAM,
    MATCH,
    SPECTATE,
    GLOBAL_EN,
    GLOBAL_GER,
    GLOBAL_RU,
    GLOBAL_FR,
    GLOBAL_ES,
    GLOBAL_PTBR,
    GLOBAL_PL,
    GLOBAL_TR,
    GLOBAL_ZH,
    CHEAT_CHANNEL,
};

