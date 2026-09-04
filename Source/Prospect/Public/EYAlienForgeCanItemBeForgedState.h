#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeCanItemBeForgedState.generated.h"

UENUM(BlueprintType)
enum class EYAlienForgeCanItemBeForgedState : uint8 {
    Invalid,
    NoForgingPossible,
    LotteryTicket,
    BaseItemAndCatalyst,
    IngotCrafting,
    MAX,
};

