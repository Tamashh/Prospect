#pragma once
#include "CoreMinimal.h"
#include "EYInputBindingCategory.generated.h"

UENUM(BlueprintType)
enum class EYInputBindingCategory : uint8 {
    MatchGeneral,
    MatchSpectate,
    MatchGearStore,
    Station,
    General,
    MAX,
};

