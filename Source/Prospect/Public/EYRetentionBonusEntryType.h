#pragma once
#include "CoreMinimal.h"
#include "EYRetentionBonusEntryType.generated.h"

UENUM(BlueprintType)
enum class EYRetentionBonusEntryType : uint8 {
    None,
    Item,
    Archetype,
    Virtual,
};

