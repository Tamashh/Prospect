#pragma once
#include "CoreMinimal.h"
#include "EYMatchOutcome.generated.h"

UENUM(BlueprintType)
enum class EYMatchOutcome : uint8 {
    NONE,
    END_OF_MATCH_ESCAPED,
    END_OF_MATCH_DIED_PLAYER,
    END_OF_MATCH_DIED_CREATURE,
    END_OF_MATCH_DIED_OTHER,
    MAX,
};

