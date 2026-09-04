#pragma once
#include "CoreMinimal.h"
#include "EYTeam.generated.h"

UENUM(BlueprintType)
enum class EYTeam : uint8 {
    Compilexfix,
    Player = 100,
    AI = 200,
    PlayerAI,
    NoTeamId = 255,
};

