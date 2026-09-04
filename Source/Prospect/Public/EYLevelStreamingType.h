#pragma once
#include "CoreMinimal.h"
#include "EYLevelStreamingType.generated.h"

UENUM(BlueprintType)
enum class EYLevelStreamingType : uint8 {
    LobbyOnly,
    LobbyCritical,
    BeforeMatch,
    DuringMatch,
    EndOfMatch,
    MAX,
};

